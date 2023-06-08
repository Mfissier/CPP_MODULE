#include "lib.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

void    menu_phonebook(std::vector <Contact> PersonList, std::string prompt) {
    if (prompt == "") {
        std::system("clear");
        std::cout << "Menu :\nADD (for add contact)\nSEARCH (for search contact)\nEXIT (for exit this program)\n";
    }
    (void)PersonList;
}