//
// Created by evelina on 31.10.2021.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <iostream>

template<typename T>
void iter(T *arr, size_t length, void (*func)(T const &)) {
    for (size_t i = 0; i < length; i++)
        func(arr[i]);
}

#endif //EX01_ITER_HPP
