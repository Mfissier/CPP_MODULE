#include "lib.hpp"

void    display_all_contact(std::vector <Contact> PersonList) {
    std::cout   << "|______________Contact Display______________|\n"
	            << "|     Index|First Name| Last Name|  Nickname|\n"
	            << "|___________________________________________|\n";
    for (size_t i = 0; i < PersonList.size(); i++) {
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << "|" << std::setw(10) << PersonList[i].getfirstName() << "|";
        std::cout << std::endl;
    }
}