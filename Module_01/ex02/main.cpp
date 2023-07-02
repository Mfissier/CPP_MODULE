#include <iostream>
#include <string>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string* strPTR = &str;
    std::string& strREF = str;

    std::cout << "Address of the variable: " << &str << "\n";
    std::cout << "Address strPTR: " << strPTR << "\n";
    std::cout << "Address strREF: " << &strREF << "\n";
    std::cout << "Display str: " << str << "\n";
    std::cout << "Value pointed strPTR: " << *strPTR << "\n";
    std::cout << "Value referenced by strREF: " << strREF << "\n";

    return 0;
}