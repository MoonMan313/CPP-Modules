//
// Created by evelina on 31.10.2021.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <stdexcept>

template<class T>
class Array {
private:
    unsigned int size;
    T *arr;
public:
    Array() {
        arr = 0;
        size = 0;
    }

    Array(unsigned int n) {
        arr = new T[n];
        size = n;
    }

    virtual ~Array() {
        if (size > 0)
            delete [] arr;
    }

    Array(Array const &copy) : size(0), arr(0) {
        *this = copy;
    }

    Array &operator=(const Array &copy) {
        if (this == &copy) {
            return *this;
        }
        if (arr != 0 && size != 0)
            delete [] arr;

        size = copy.getSize();
        arr = new T[copy.getSize()];
        for (unsigned int i = 0; i < size; i++)
            arr[i] = copy[i];
        return *this;
    }


    unsigned int getSize() const {
        return size;
    }

    T &operator[](unsigned int ind) const{
         if (ind >= 0 && ind < size)
            return arr[ind];
        throw std::overflow_error("invalid index");
    }
};

#endif //EX02_ARRAY_HPP
