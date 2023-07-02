#include "zombie.hpp"

std::string itoa(int num) {
    std::ostringstream conv;
    conv << num;
    return (conv.str());
}

Zombie  *zombieHorde(int N, std::string name) {
    Zombie *nzomb = new Zombie[N];
    for (int i = 0; i < N; i++) {
        nzomb[i].setName(name + itoa(i));
    }
    return (nzomb);
}