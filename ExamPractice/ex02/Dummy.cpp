#include "Dummy.hpp"

Dummy::Dummy() : ATarget()
{
    this->_type = "Target Practice Dummy";
}

Dummy::~Dummy(){};

Dummy* Dummy::clone() const
{return new Dummy(*this);}