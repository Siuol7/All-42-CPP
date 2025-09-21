#include <iostream>
#include <string>

class Warlock
{
    public  :
        Warlock(std::string name, std::string title);
        ~Warlock();

    private :
        std::string _name;
        std::string _title;
        Warlock();
        Warlock(Warlock& other);
        Warlock &operator=(Warlock& other);
};