#pragma once 

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class Warlock
{
    public :
        Warlock(const std::string& name, const std::string& title);
        ~Warlock();
        Warlock(const Warlock& other) = delete;
        Warlock &operator=(const Warlock& other) = delete;
        
        const std::string &getName() const;
        const std::string &getTitle() const;

        void    setTitle(const std::string& title);

        void    introduce() const;

        void    learnSpell(ASpell* spell);
        void    forgetSpell(std::string spellName);
        void    launchSpell(std::string spellName, ATarget* target);
        
    private :
        std::string _name;
        std::string _title;
        std::map<std::string, ASpell*>   _spellSet;
};