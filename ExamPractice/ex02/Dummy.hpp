#pragma once 

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
    public:
        Dummy();
        virtual ~Dummy() override;
        virtual Dummy* clone() const override;

};