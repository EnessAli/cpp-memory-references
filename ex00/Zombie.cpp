#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) 
{
    Name = name;
	std::cout << "Zombie \"" << Name << "\" Constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie \"" << this->Name << "\" Destructor called" << std::endl;
	return ;
}