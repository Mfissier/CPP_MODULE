#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>


class Contact {
    private :
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
 
    public :
        Contact();
        
        // functions.cpp
        friend int affect_firstName(Contact &Person, std::string &str);
        friend int affect_lastName(Contact &Person, std::string &str);
        friend int affect_nickname(Contact &Person, std::string &str);
        friend int affect_phoneNumber(Contact &Person, std::string &str);
        friend int affect_darkestSecret(Contact &Person, std::string &str);
        void display() const;

        
};
void menu_phonebook(std::vector <Contact> PersonList, std::string prompt);

#endif // MYCLASS_HPP
