#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if(ac == 2)
    {
        std::string info = av[1];
        harl.complain(info);
    }
    else
        std::cout << "Sorry - Only Two Arguments ! Executable Argument : DEBUG, INFO, WARNING, ERROR" << std::endl;
    return 0;
}
