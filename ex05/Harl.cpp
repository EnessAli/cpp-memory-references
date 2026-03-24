#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon on my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really love it!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I can't believe adding extra bacon costs more money. You didn't put enough bacon on my burger! If you did, I couldn't ask for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to talk to the manager now." << std::endl;
}

void Harl::error1( void )
{
    std::cout << "Searched Function not found." << std::endl;
}

void Harl::complain( std::string level )
{
    void    (Harl::*func[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::error1};
    std::string info[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    while (level.compare(info[i]) && i < 4)
        i++;
    (this->*func[i])();
}
