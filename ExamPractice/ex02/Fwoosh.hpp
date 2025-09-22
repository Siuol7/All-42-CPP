#pragma once 

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;

class Fwoosh : public ASpell
{
    public:
        Fwoosh();
        virtual ~Fwoosh() override;
        virtual Fwoosh* clone() const override;

};