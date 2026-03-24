#include "Zombie.hpp"

int main(void)
{
    std::cout << "\n***-----------***-----------***\n" << std::endl;
    Zombie* z = newZombie("Plants");
    z->announce();
    delete(z);
    std::cout << "\n***-----------***-----------***\n" << std::endl;
    randomChump("Zombie");
    std::cout << "\n***-----------***-----------***\n" << std::endl;
}
