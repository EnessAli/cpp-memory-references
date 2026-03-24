#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
     Zombie *data = new Zombie[N];
     for (int i = 0; i < N; i++)
     {
        new (&data[i]) Zombie(name);
     }
     return data;
}
