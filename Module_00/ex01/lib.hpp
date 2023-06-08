#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <string>

class Contact {
    private :
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
 
    public :
        Contact();
        
        friend int affect_firstName(Contact &Person, std::string &str);
        friend int affect_lastName(Contact &Person, std::string &str);
        friend int affect_nickname(Contact &Person, std::string &str);
        friend int affect_phoneNumber(Contact &Person, std::string &str);
        friend int affect_darkestSecret(Contact &Person, std::string &str);

        void display() const;
};

#endif // MYCLASS_HPP
