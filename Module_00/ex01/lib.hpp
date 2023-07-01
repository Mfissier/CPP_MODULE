#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <iomanip>

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

        std::string getfirstName() const { 
            return (firstName); 
        }
        std::string getlastName() const { 
            return (lastName); 
        }
        std::string getnickname() const { 
            return (nickname); 
        }
        std::string getphoneNumber() const { 
            return (phoneNumber); 
        }
        std::string getdarkestSecret() const { 
            return (darkestSecret); 
        }
        // menu_functions.cpp
        friend void add_menu_firstName(std::vector <Contact> &PersonList, std::string prompt);
        friend void add_menu_lastName(std::vector <Contact> &PersonList, std::string prompt);
        friend void add_menu_nickname(std::vector <Contact> &PersonList, std::string prompt);
        friend void add_menu_phoneNumber(std::vector <Contact> &PersonList, std::string prompt);
        friend void add_menu_darkestSecret(std::vector <Contact> &PersonList, std::string prompt);
        void display() const;
};

// menu.cpp
void    menu_phonebook(std::vector <Contact> PersonList, std::string prompt);

// menu_display_functions.cpp
void    display_all_contact(std::vector <Contact> PersonList);
void    display_contact(std::vector <Contact> PersonList, size_t idx);

//utils.cpp
bool    strisdigit(const std::string &str);
void    send_error_menuadd(int error);

#endif
