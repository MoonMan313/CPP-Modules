//
// Created by evelina on 31.10.2021.
//

#ifndef EX00_FUNCTION_TEMPLATES_HPP
#define EX00_FUNCTION_TEMPLATES_HPP

template<typename T>
void swap(T &a, T &b){
    T c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
T min(T a, T b) {
    return a < b ? a : b;
}

template<typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

#endif //EX00_FUNCTION_TEMPLATES_HPP
