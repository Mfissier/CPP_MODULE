#include "zombie.hpp"

int main(void) {
    Zombie zomb("bob");
    zomb.announce();

    randomChump("RandZomb");

    Zombie *to_zomb;
    to_zomb = newZombie("Anna");
    to_zomb->announce();
    delete to_zomb;

    return (0);
}