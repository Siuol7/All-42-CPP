#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell()
{
    this->_name = "Fwoosh";
    this->_effects = "fwooshed";
}

Fwoosh::~Fwoosh(){};

Fwoosh* Fwoosh::clone() const
{return new Fwoosh(*this);}