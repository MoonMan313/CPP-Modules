#include <iostream>
#include <string>

int main() {
    std::string orig = "HI THIS IS BRAIN";
    std::string *stringPTR = &orig;
    std::string &stringREF = orig;

    std::cout << "address of the string: " << &orig << std::endl;
    std::cout << "by using stringPTR: " << &(*stringPTR) << std::endl;
    std::cout << "by using stringREF: " << &stringREF << std::endl;
    std::cout << "Original string: " << orig << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
}
