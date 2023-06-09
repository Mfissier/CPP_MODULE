#include "lib.hpp"
#include <vector>

int main(int ac, char **av) {
    Contact Person;
    std::string content;
    std::vector <Contact> PersonList;

    if (ac == 0)
        return (0);
    PersonList.push_back(Person);
    affect_firstName(PersonList[0], content = av[1]);
    affect_lastName(PersonList[0], content = av[2]);
    menu_phonebook(PersonList, content = av[1]);
    for (size_t i = 0; i < PersonList.size(); i++)
        PersonList[i].display();        
    return 0;
}
