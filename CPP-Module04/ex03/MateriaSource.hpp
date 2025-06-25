/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 01:15:31 by siuol             #+#    #+#             */
/*   Updated: 2025/06/25 12:01:58 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSouce.hpp"

class MateriaSource : public IMateriaSource
{
    public :
        MateriaSource();
        virtual ~MateriaSource() override;
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        
        virtual void learnMateria(AMateria*) override;
        virtual AMateria* createMateria(std::string const& type) override;

    private :
        AMateria*   _inventory[4];
};
