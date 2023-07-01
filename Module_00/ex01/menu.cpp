#include "lib.hpp"

void    menu_phonebook(std::vector <Contact> PersonList, std::string prompt) {    
    Contact Person;
    while (1)
    {
        if (prompt == "ADD") {    
            add_menu_firstName(PersonList, prompt);
            add_menu_lastName(PersonList, prompt);
            add_menu_nickname(PersonList, prompt);
            add_menu_phoneNumber(PersonList, prompt);
            add_menu_darkestSecret(PersonList, prompt);            
            std::system("clear");
            std::cout << "Contact save !\n";
            if (PersonList.size() < 8)
                PersonList.push_back(Person);
            std::system("clear");
            std::cout << "Main Menu :\n"
            <<  "ADD : add new contact !\n"
            <<  "SEARCH : list and search contact with index !\n"
            <<  "EXIT : Leave this program !\n";
            std::cin >> prompt;
        }
        else if (prompt == "SEARCH") {
            std::system("clear");
            display_all_contact(PersonList);
            std::cout << "Send index :\n";
            getline(std::cin, prompt);
            std::cin >> prompt;
            display_contact(PersonList, std::atoi(prompt.c_str()));
            std::cin >> prompt;
        }
        else if (prompt == "EXIT") {
            std::system("clear");
            exit(0);
        }
        else {
            std::system("clear");
            std::cout << "Main Menu :\n"
            <<  "ADD : add new contact !\n"
            <<  "SEARCH : list and search contact with index !\n"
            <<  "EXIT : Leave this program !\n";
            std::cin >> prompt;     
        }
    }
}
// Add cin.good(); | 
// Check if empty;
// Create menu_functions
// Create search_functions