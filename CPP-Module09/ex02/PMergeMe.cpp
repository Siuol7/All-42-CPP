/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:08 by siuol             #+#    #+#             */
/*   Updated: 2025/07/23 01:04:49 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PmergeMe::PmergeMe(char **av)
{
    int                 value;
    std::istringstream  stream;
    std::string         token;
    while (*av != NULL)
    {
        stream.clear();
        stream.str(*av);
        while (stream >> token)
        {
            auto value_ptr = std::from_chars(token.data(), token.data() + token.length(), value);
            

            if (value_ptr.ec == std::errc::invalid_argument)
                throw std::runtime_error("Error : Not an integer");
            else if (value_ptr.ptr != token.data() + token.length())
                throw std::runtime_error("Error : Not an integer");
            else if (value_ptr.ec == std::errc::result_out_of_range)
                throw std::runtime_error("Error : Out of range number");
            else if (value < 0)
                throw std::runtime_error("Error : [" + std::to_string(value) + "] is not a positive integer");
            else if (std::find(this->_vector.begin(), this->_vector.end(), value) != this->_vector.end())
                throw std::runtime_error("Error : [" + std::to_string(value) + "] appears twice");
            this->_vector.push_back(value);
            this->_list.push_back(value);
        }
        av++;
    }
    LOG_GREEN("Previous sequence :");
    for (auto nb : this->_vector)
        std::cout << " " << nb;
    std::cout << std::endl;
}

void    PmergeMe::sort()
{
    Time vSortTime = _vectorSort(this->_vector);
    Time lSortTime = _listSort(this->_list);
    auto    vIt = this->_vector.begin();
    auto    lIt = this->_list.begin();

    if (this->_vector.size() != this->_list.size())
        throw std::runtime_error("Error : Sorting failed");
    
    LOG_GREEN("Sorted container:");   
    for(; vIt != this->_vector.end(); vIt++, lIt++)
    {
        if (*vIt != *lIt)
            throw std::runtime_error("Error : vector value [" + std::to_string(*vIt)
                        +"] different from list value [" + std::to_string(*lIt) +"]");
        std::cout << " " << *vIt;
    }
    std::cout << std::endl;
    
    LOG_GREEN("Time to process a range of ");
    LOG_GREEN(std::to_string(this->_vector.size()));
    LOG_GREEN(" elements with std::vector : ");
    std::cout << std::fixed << std::setprecision(4) << vSortTime.count() << "us" << std::endl;

     LOG_GREEN("Time to process a range of ");
    LOG_GREEN(std::to_string(this->_list.size()));
    LOG_GREEN(" elements with std::list : ");
    std::cout << std::fixed << std::setprecision(4) << lSortTime.count() << "us" << std::endl;
}

Time    PmergeMe::_vectorSort(std::vector<int>& container)
{
    auto start = Timer::now();
    
    if (container.size() <= 1)
        return Timer::now() - start;
    
    std::vector<int>    main;
    std::vector<int>    pending;
    
    for (auto i = 0u; i + 1 < container.size() ; i += 2)
    {
        main.push_back(std::max(container[i], container[i + 1]));
        pending.push_back(std::min(container[i], container[i + 1]));
    }

    if (container.size() % 2 != 0)
        main.push_back(container.back());
    _vectorSort(main);

    PmergeMe::_vectorInsert(main, pending);
    container = main;
    return Timer::now() - start;
}

Time    PmergeMe::_listSort(std::list<int>& container)
{
    auto start = Timer::now();
    
    if (container.size() <= 1)
        return Timer::now() - start;
        
    std::list<int>  main;
    std::list<int>  pending;

    for(auto lIt = container.begin(); lIt != container.end(); )
    {
        auto next  = std::next(lIt, 1);
        if (next == container.end())
            break;
        main.push_back(std::max(*lIt, *next));
        pending.push_back(std::min(*lIt, *next));
        std::advance(lIt, 2);
    }
    if (container.size() % 2 != 0)
        main.push_back(container.back());
    _listSort(main);
    
    PmergeMe::_listInsert(main, pending);
    container = main;
    return Timer::now() - start; 
}

void    PmergeMe::_vectorInsert(std::vector<int>& main, std::vector<int>& pending)
{
    std::vector<int> jacob = _jacobGenerate(pending);
    for (auto i = 2; i < jacob.size(); i++)
    {
        if (jacob[i] - 1 < pending.size() && pending[jacob[i] - 1] != -1)
        {
            auto mark = std::lower_bound(main.begin(), main.end(), pending[jacob[i] - 1]);
            main.insert(mark, pending[jacob[i] - 1]);
            pending[jacob[i] - 1] = -1;
        }
    }
    for (auto i = 0; i < pending.size(); i++)
    {
        if (pending[i] == -1)
            continue ;
        auto mark = std::lower_bound(main.begin(), main.end(), pending[i]);
        main.insert(mark, pending[i]);
    }
}

void    PmergeMe::_listInsert(std::list<int>& main, std::list<int>& pending)
{
    std::list<int> jacob = _jacobGenerate(pending);
    auto jIt = jacob.begin();
    std::advance(jIt, 2);

    for (; jIt!= jacob.end(); jIt++)
    {
        auto pIt = pending.begin();
        if (*jIt - 1 < pending.size())
        {            
            std::advance(pIt, *jIt - 1);
            if (*pIt != - 1)
            {
                auto mark = std::lower_bound(main.begin(), main.end(), *pIt);
                main.insert(mark, *pIt);
                *pIt = -1;
            }   
        }
    }
    auto pIt = pending.begin();
    for (; pIt != pending.end(); pIt++)
    {
        if (*pIt == -1)
            continue;
        auto mark = std::lower_bound(main.begin(), main.end(), *pIt);
        main.insert(mark, *pIt);
    }
}