#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    std::vector<int> v;
    for (int i = 0; i < 100; i++)
        v.push_back(i);

    try {
        std::cout << *easyfind(v, 100) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << *easyfind(v, 0) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << *easyfind(v, -1) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

