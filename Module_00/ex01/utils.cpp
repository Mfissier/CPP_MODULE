#include "lib.hpp"

bool strisdigit(const std::string &str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

void send_error_menuadd(int error) {
    if (error == 2)
        std::cout << "Error empty prompt !\n";
    else if (error == 3)
        std::cout << "Error system !\n";
    else if (error == 4)
        std::cout << "Error : Detect character\n";
}