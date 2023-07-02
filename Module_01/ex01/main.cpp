#include "zombie.hpp"

int main(void) {
    Zombie *nzomb;

    nzomb = zombieHorde(5, "Loufi");
    for (size_t i = 0; i < 5; i++)
        nzomb[i].announce();
    delete[] nzomb;
    return (0);
}