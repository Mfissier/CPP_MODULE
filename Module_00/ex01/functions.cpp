#include "lib.hpp"
#include <iostream>
#include <string>

Contact::Contact() {}

/* Affect Data : */
int affect_firstName(Contact &Person, std::string &str) {
    Person.firstName = str;
    return (0);
}
int affect_lastName(Contact &Person, std::string &str) {
    Person.lastName = str;
    return (0);
}
int affect_nickname(Contact &Person, std::string &str) {
    Person.nickname = str;
    return (0);
}
int affect_phoneNumber(Contact &Person, std::string &str) {
    Person.phoneNumber = str;
    return (0);
}
int affect_darkestSecret(Contact &Person, std::string &str) {
    Person.darkestSecret = str;
    return (0);
}

/*Display Profil*/
void Contact::display() const {
    std::cout << "firstName : " << firstName << std::endl;
    std::cout << "lastName : " << lastName << std::endl;
    std::cout << "nickname : " << nickname << std::endl;
    std::cout << "phoneNumber : " << phoneNumber << std::endl;
    std::cout << "darkestSecret : " << darkestSecret << std::endl;
}