#include "Harl.hpp"

int main(int ac, char **av)
{
    (void) *av;
    
    if(ac == 1)
    {
        Harl harl;
    
        harl.complain("DEBUG");
    }
    else
        std::cout << "Just Enter The Program Name " << std::endl;

    return 0;
}
