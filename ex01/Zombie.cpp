#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
    this->name = name;
	std::cout << "Zombie \"" << this->name << "\" Constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie \"" << this->name << "\" Destructor called" << std::endl;
	return ;
}