#include <iostream>
#include <algorithm>

using namespace std;

int main(int ac, char **av) {

    std::string str;

    if (ac > 1) {
        for (size_t y = 1; av[y] ; y++)
        {
            str = av[y];
            for (size_t i = 0; i < str.length(); i++)
                str[i] = std::toupper(str[i]); 
            cout << str;
        }
        cout << endl;
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return 0;
}