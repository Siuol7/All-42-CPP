/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:06:00 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/09 01:57:54 by siuol            ###   ########.fr       */
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
    //OCF
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
        
    //Operator
        T&  operator[](unsigned int i)
        {
            if (i > this->_size)
                throw std::out_of_range("Index out of bounds");
            return this->_arr[i];
        }
        
        const T& operator[](unsigned int i) const
        {
            if (i > this->_size)
                throw std::out_of_range("Index out of bounds");
            return this->_arr[i];
        }

        const unsigned int size() const {return this->_size;}
    
    private :
        T*  _arr;
        unsigned int    _size;
};
