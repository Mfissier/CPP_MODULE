#include "lib.hpp"


int add_menu_firstName(std::vector <Contact> PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send firstName:\n";
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty())
                error = 1;
            else
                error = 0;
            affect_firstName(PersonList[PersonList.size() - 1], prompt);
        }
        return (0);
}

int add_menu_lastName(std::vector <Contact> PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send lastName:\n";
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty())
                error = 1;
            else
                error = 0;
            affect_lastName(PersonList[PersonList.size() - 1], prompt);
        }
        return (0);
}

int add_menu_nickname(std::vector <Contact> PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send nickname:\n";
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty())
                error = 1;
            else
                error = 0;
            affect_nickname(PersonList[PersonList.size() - 1], prompt);
        }
        return (0);
}

int add_menu_phoneNumber(std::vector <Contact> PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send phoneNumber:\n";
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty())
                error = 1;
            else
                error = 0;
            affect_phoneNumber(PersonList[PersonList.size() - 1], prompt);
        }
        return (0);
}

int add_menu_darkestSecret(std::vector <Contact> PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send darkestSecret:\n";
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty())
                error = 1;
            else
                error = 0;
            affect_darkestSecret(PersonList[PersonList.size() - 1], prompt);
        }
        return (0);
}