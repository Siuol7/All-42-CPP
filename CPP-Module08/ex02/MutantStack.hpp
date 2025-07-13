/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 05:21:58 by siuol             #+#    #+#             */
/*   Updated: 2025/07/14 02:21:00 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

template<typename T>
class   MutantStack : public std::stack<T>
{
    public :
        MutantStack() : std::stack<T>(){};
        ~MutantStack() = default;
        MutantStack(const MutantStack& other) : std::stack<T>(other){};
        MutantStack& operator=(const MutantStack& other)
        {
            if (this != &other)
                std::stack<T>::operator=(other);
            return *this;
        }

        using iterator = typename std::stack<T>::container_type::iterator;
        iterator    begin(){return this->c.begin();}
        iterator    end(){return this->c.end();}
        
        using const_iterator = typename std::stack<T>::container_type::const_iterator;
        const_iterator  begin() const {return this->c.begin();}
        const_iterator  end() const {return this->c.end();}
    
        using riterator = typename std::stack<T>::container_type::reverse_iterator;
        riterator   rbegin(){return this->c.rbegin();}
        riterator   rend(){return this->c.rend();}
        
        using const_riterator = typename std::stack<T>::container_type::const_reverse_iterator;
        const_riterator rbegin() const {return this->c.rbegin();}
        const_riterator rend() const {return this->c.rend();}
};

