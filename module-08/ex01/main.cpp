#include <iostream>
#include "span.hpp"

int main() {
    span a = span(5);

    a.addNumber(5);
    a.addNumber(3);
    a.addNumber(17);
    a.addNumber(9);
    a.addNumber(11);

    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;

    try {
        span b(1000);
        std::vector<int> arr;
        for (int i = 0; i < 1000; i++)
            arr.push_back(i);
        b.addNumber(arr.begin(), arr.end());
        std::cout << b.shortestSpan() << std::endl;
        std::cout << b.longestSpan() << std::endl;
        b.addNumber(5);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        span c(1000);
        std::vector<int> arr;
        for (int i = 0; i < 1000; i++)
            arr.push_back(i);
        c.addNumber(arr.begin(), arr.end());
        std::cout << c.shortestSpan() << std::endl;
        std::cout << c.longestSpan() << std::endl;
        c.addNumber(1001);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}