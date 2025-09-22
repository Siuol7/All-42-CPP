#include "Warlock.hpp"
#include "ATarget.hpp"
#include "ASpell.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{
    std::cout << name << ":This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    for (std::map<std::string, ASpell*>::iterator it = this->_spellSet.begin(); it != this->_spellSet.end(); ++it)
        delete it->second;
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
    return this->_name;
}

const std::string &Warlock::getTitle() const
{
    return this->_title;
}

void    Warlock::setTitle(const std::string& title)
{
    this->_title = title;
}

void    Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell* spell)
{
    this->_spellSet.insert({spell->getName(), spell->clone()});
}

void    Warlock::forgetSpell(std::string spellName)
{
    std::map<std::string, ASpell*>::iterator it  = this->_spellSet.find(spellName);
    if (it != this->_spellSet.end())
    {
        delete it->second;
        this->_spellSet.erase(spellName);
    }
}

void    Warlock::launchSpell(std::string spellName, ATarget* target)
{
    std::cout << target->getType() << " has been " << this->_spellSet[spellName]->getEffects() << "!" << std::endl;
}