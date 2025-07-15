/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 22:55:38 by siuol             #+#    #+#             */
/*   Updated: 2025/07/15 22:01:12 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = nullptr;
    ICharacter* me = nullptr;
    ICharacter* bob = nullptr;
    try
    {
        src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        me = new Character("me");
        //throw std::runtime_error("TEST SUDDEN THROW");
        AMateria* tmp;
        Character a;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        a.equip(tmp);
        Character b(a);
        bob = new Character("bob");
        b.use(0, *bob);
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        return 0;
    }
    catch(std::exception& e)
    {
        LOG_RED(e.what());
        delete me;
        delete bob;
        delete src;
    }
}