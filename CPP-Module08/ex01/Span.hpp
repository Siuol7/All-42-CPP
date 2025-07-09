/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:30:32 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/09 16:35:54 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Span
{
    public  :
        Span() = default;
        ~Span() = default;
        Span(const Span& other) = default;
        Span& operator=(const Span& other) = default;

        void    addNumber(int n);
        
    private :
        unsigned int    N;
};