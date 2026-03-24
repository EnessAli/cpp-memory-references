#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon on my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really love it!" << std::endl;
    info();
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I can't believe adding extra bacon costs more money. " << std::endl;
    std::cout << "You didn't put enough bacon on my burger! " << std::endl;
    std::cout << "If you did, I couldn't ask for more!" << std::endl;
    warning();
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve some extra bacon for free. " << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
    error();
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to talk to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void    (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    std::string info[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    while (level.compare(info[i]) && i < 4)
        i++;
            
    switch (i)
    {
    case 0:
        (this->*func[0])();
        break;
    case 1:
        (this->*func[1])();
        break;
    case 2:
        (this->*func[2])();
        break;
    case 3:
        (this->*func[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    
    }
}
