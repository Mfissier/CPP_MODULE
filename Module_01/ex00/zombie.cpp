#include "zombie.hpp"

void Zombie::announce(void) {
    std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << ": has died" << std::endl;
}

Zombie *newZombie(std::string name) {
    return (new Zombie(name));
}

void randomChump(std::string name) {
    Zombie newzomb(name);
    newzomb.announce();
}