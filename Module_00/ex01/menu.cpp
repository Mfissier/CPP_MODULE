#include "lib.hpp"

void    menu_phonebook(std::vector <Contact> PersonList, std::string prompt) {    
    Contact Person;
    while (1)
    {
        if (prompt == "ADD") {
            std::system("clear");
            std::cout << "Send firstName:\n";
            std::cin >> prompt;

            affect_firstName(PersonList[PersonList.size() - 1], prompt);
            std::system("clear");
            std::cout << "Send lastName:\n";
            std::cin >> prompt;
            
            affect_lastName(PersonList[PersonList.size() - 1], prompt);
            std::system("clear");
            std::cout << "Send nickname:\n";
            std::cin >> prompt;
            
            affect_nickname(PersonList[PersonList.size() - 1], prompt);
            std::system("clear");
            std::cout << "Send phoneNumber:\n";
            std::cin >> prompt;
            
            affect_phoneNumber(PersonList[PersonList.size() - 1], prompt);
            std::system("clear");
            std::cout << "Send darkestSecret:\n";
            std::cin >> prompt;
            
            affect_darkestSecret(PersonList[PersonList.size() - 1], prompt);
            std::system("clear");
            std::cout << "Contact save !\n";

            if (PersonList.size() < 8)
                PersonList.push_back(Person);
            std::cin >> prompt;
        }
        else if (prompt == "SEARCH") {
            std::system("clear");

            std::cout << "Send index :\n";
            std::cin >> prompt;
        }
        else if (prompt == "EXIT") {
            std::system("clear");
            exit(0);
        }
        else {
            std::system("clear");
            std::cout << "ERROR !\n";
            std::cin >> prompt;     
        }
    }    
}
// Add cin.good(); | 
// Check if empty;
// Create menu_functions
// Create search_functions