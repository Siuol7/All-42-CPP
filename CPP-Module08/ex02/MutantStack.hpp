/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 05:21:58 by siuol             #+#    #+#             */
/*   Updated: 2025/07/14 00:45:00 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

template<typename T>
class   MutantStack : public std::stack<T>
{
    public :
        MutantStack() : std::stack<T>(){};
        ~MutantStack() : ~std::stack<T>(){};
        MutantStack(const other& MutantStack) : std::stack<T>(other){};
        MutantStack& operator=(const other& MutantStack)
        {
            if (this != other)
                std::stack<T>::operator=(other);
            return *this;
        }

        using iterator = std::stack<T>::container_type::iterator;
        iterator    begin(){return this->c.begin();}
        iterator    end(){return this->c.end();}
        
        using const_iterator =  std::stack<T>::container_type::const_iterator;
        const_iterator  begin(){return this->c.begin();}
        const_iterator  end(){return this->c.end();}
    
        using riterator = std::stack<T>::container_type::reverse_iterator;
        riterator   begin(){return this->c.rbegin();}
        riterator   end(){return this->c.rend();}
        
        using const_riterator = std::stack<T>::container_type::const_reverse_iterator;
        const_riterator begin(){return this->c.rbegin();}
        const_riterator end(){return this->c.rend();}
};

