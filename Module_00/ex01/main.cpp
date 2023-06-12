#include "lib.hpp"

int main(int ac, char **av) {
    Contact Person;
    std::string content;
    std::vector <Contact> PersonList;

    if (ac == 0)
        return (0);
    PersonList.push_back(Person);
    menu_phonebook(PersonList, content = av[1]);    
    return 0;
}
