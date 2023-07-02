#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class	Zombie
{
	private:
		std::string	name;
	public:
        Zombie() {};
		~Zombie();
        void	setName(std::string name);
		void    announce(void);
};
	Zombie* newZombie(std::string name);
	Zombie  *zombieHorde(int N, std::string name);
    void randomChump(std::string name);
#endif