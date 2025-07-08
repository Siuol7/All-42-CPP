/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:25:05 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/08 16:49:00 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

namespace test
{
    class test
    {
        public :
            test() = default;
            ~test() = default;
            test(const test& other) = default;
            test& operator=(const test& other) = default;
            void        generate(const int i);
            void        increment(void);
            int         getValue() const;
            std::string getName() const;

        private :
            std::string _name;
            int         _value;
    };
    
    void    test::generate(const int i)
    {
        this->_value = i;
        if (i + 32 < 33 || i + 32 > 125)
            this->_name = "out";
        else
            this->_name = std::string(1, static_cast<char>(i + 32));
    }

    void    test::increment(void)
    {
        this->_value++;
    }

    int test::getValue() const{return this->_value;}
    
    std::string test::getName() const{return this->_name;}
    
    void    callIncrement(test& src) {src.increment();}

    std::ostream& operator<<(std::ostream& out, const test& src)
    {
        out << "name : " << src.getName() << " value : " << src.getValue() << std::endl;
        return out;
    }
    
    void    print(const test& src) {std::cout << src;}
    
}

int main()
{
    try
    {
        test::test    arr[10];
        for (int i = 0; i < 10; i++)
            arr[i].generate(i + 30);
        iter(arr, 10, test::callIncrement);
        iter(arr, 10, test::print);
    }
    catch(std::exception& e)
    {
        LOG_RED(std::string("Exception caught : ") + e.what());
    }
}

