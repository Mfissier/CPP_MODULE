#include "lib.hpp"

std::string replace_chars(std::string str) {
    if (str.size() > 10) {
        std::fill(str.begin() + 9, str.begin()+ 10, '.');
        str.erase(10, str.size());
    }
    return (str);
}

void    display_all_contact(std::vector <Contact> PersonList) {
    std::cout   << "|______________Contact Display all__________|\n"
	            << "|     Index|First Name| Last Name|  Nickname|\n"
	            << "|___________________________________________|\n";
    for (size_t i = 0; i < PersonList.size(); i++) {
        if (!PersonList[i].getfirstName().empty()) {
            std::cout << "|" << std::setw(10) << i;
            std::cout << "|" << std::setw(10) << replace_chars(PersonList[i].getfirstName());
            std::cout << "|" << std::setw(10) << replace_chars(PersonList[i].getlastName());
            std::cout << "|" << std::setw(10) << replace_chars(PersonList[i].getnickname()) << "|";
            std::cout << std::endl;
        }
    }
    std::cout   << "|___________________________________________|\n";
}

void    display_contact(std::vector <Contact> PersonList, size_t idx) {
    if (idx > 8) {
        std::cout << "ERROR : bad index !\n";
        return ;
    }
    std::system("clear");
    for (size_t i = 0; i < PersonList.size(); i++) {
        if (idx == i) {
            if (!PersonList[i].getfirstName().empty()) {
                std::cout << "index : " << i << "\n";
                std::cout << "Fisrtname : " << PersonList[i].getfirstName() << "\n";
                std::cout << "Lastname : " << PersonList[i].getlastName() << "\n";
                std::cout << "Nickname : " << PersonList[i].getnickname() << "\n";
                std::cout << "PhoneNumber : " << PersonList[i].getphoneNumber() << "\n";
                std::cout << "Secrets : " << PersonList[i].getdarkestSecret() << "\n";
                return ;
            }
        }
    }
    std::cout << "ERROR : Contact not found !\n";
}