#include "Zombie.hpp"

int main(void)
{
    Zombie *army = zombieHorde(3, "enes");
    for (int i = 0; i < 3; i++)
    {
        army[i].announce();
    }
    delete [] army;
}