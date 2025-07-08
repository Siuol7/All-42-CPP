/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:06:00 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/09 01:07:42 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

template<typename T>
class Array
{
    public :
        Array() : _arr(nullptr), _size(0){};
        Array(const unsigned int n) : _arr(new T[n]()), _size(n){};
        ~Array(){delete []_arr;}
        Array(const Array& other) : _arr(new T[other._size]()), _size(other._size)
        {
            for (unsigned int i = 0; i < other._size; i++)
                this->_arr[i] =  other._arr[i];
        }
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                delete []this->_arr;
                this->_size = other._size;
                this->_arr = new T[other._size]();
                for (unsigned int i = 0; i < other._size; i++)
                    this->_arr[i] = other._arr[i];
            }  
        }
        
        
    private :
        T*  _arr;
        unsigned int    _size;
};
