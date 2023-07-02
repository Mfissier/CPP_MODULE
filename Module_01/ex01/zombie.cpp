#include "zombie.hpp"

void    Zombie::announce(void) {
    std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << ": has died" << std::endl;
}

Zombie *newZombie(std::string name) {
    Zombie *zomb = new Zombie;
    zomb->setName(name);
    return (zomb);
}

void randomChump(std::string name) {
    Zombie newzomb;
    newzomb.setName(name);
    newzomb.announce();
}