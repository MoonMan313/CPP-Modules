//
// Created by evelina on 31.10.2021.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include <algorithm>

class IndexOutOfBoundException: public std::exception {
public:
    const char* what() const throw() {
        return "The index is out of bounds of the array!";
    };
};

template<typename T>
typename T::iterator easyfind(T &arr, int val) {
    typename T::iterator i;
    i = std::find(arr.begin(), arr.end(), val);
    if (i == arr.end())
        throw IndexOutOfBoundException();
    return i;
}

#endif //EX00_EASYFIND_HPP
