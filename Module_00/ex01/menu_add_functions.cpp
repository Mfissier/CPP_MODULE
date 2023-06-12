#include "lib.hpp"


void add_menu_firstName(std::vector <Contact> &PersonList, std::string prompt) {
        int error;
        error = 1;
        getline(std::cin, prompt);
        while (error) {
            std::system("clear");
            std::cout << "Send Firstname:\n";
            send_error_menuadd(error);            
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty()) {
                error = 1;
                if (prompt.empty())
                    error = 2;
                else
                    error = 3;
            }
            else
                error = 0;
            affect_firstName(PersonList[PersonList.size() - 1], prompt);
        }
}

void add_menu_lastName(std::vector <Contact> &PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send Lastname:\n";
            send_error_menuadd(error);            
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty()) {
                error = 1;
                if (prompt.empty())
                    error = 2;
                else
                    error = 3;
            }
            else
                error = 0;
            affect_lastName(PersonList[PersonList.size() - 1], prompt);
        }
}

void add_menu_nickname(std::vector <Contact> &PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send Nickname:\n";
            send_error_menuadd(error);            
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty()) {
                error = 1;
                if (prompt.empty())
                    error = 2;
                else
                    error = 3;
            }
            else
                error = 0;
            affect_nickname(PersonList[PersonList.size() - 1], prompt);
        }
}

void add_menu_phoneNumber(std::vector <Contact> &PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send Phone number:\n";
            send_error_menuadd(error);            
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty() || !strisdigit(prompt)) {
                error = 1;
                if (prompt.empty())
                    error = 2;
                else if (!strisdigit(prompt))
                    error = 4;
                else
                    error = 3;
            }
            else
                error = 0;
            affect_phoneNumber(PersonList[PersonList.size() - 1], prompt);
        }
}

void add_menu_darkestSecret(std::vector <Contact> &PersonList, std::string prompt) {
        int error = 1;
        while (error) {
            std::system("clear");
            std::cout << "Send Darkest secret:\n";
            send_error_menuadd(error);
            getline(std::cin, prompt);
            if (!std::cin.good() || prompt.empty()) {
                error = 1;
                if (prompt.empty())
                    error = 2;
                else
                    error = 3;
            }
            else
                error = 0;
            affect_darkestSecret(PersonList[PersonList.size() - 1], prompt);
        }
}