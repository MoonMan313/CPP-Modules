//
// Created by evelina on 31.10.2021.
//

#include "span.hpp"

class StoredInArrayException : public std::exception {
public:
    const char *what() const throw() {
        return "This number is already stored!";
    };
};

class ArrayOverflowException : public std::exception {
public:
    const char *what() const throw() {
        return "Overflow of array";
    };
};

span::span(unsigned int n) {
    this->limit = n;
    arr = new std::vector<int>(n, 0);
}

span::span(const span &copy) {
    *this = copy;
}

span::~span() {}

span &span::operator=(const span &copy) {
    if (this != &copy) {
        delete arr;
        arr = new std::vector<int>(copy.getArr()->size());
        for (int i = 0; i < (int) copy.getArr()->size(); i++)
            arr->push_back(copy.getArr()->at(i));
    }
    return *this;
}

std::vector<int> *span::getArr() const {
    return arr;
}

void span::addNumber(int x) {
    std::vector<int>::iterator i;
    i = std::find(arr->begin(), arr->end(), x);
    if (i != arr->end())
        throw StoredInArrayException();
    else
        arr->insert(i, x);
}

int span::longestSpan(void) {
    std::sort(arr->begin(), arr->end());
    return (arr->at(arr->size() - 1) - arr->at(0));
}

int span::shortestSpan(void) {
    int min;
    std::sort(arr->begin(), arr->end());
    min = arr->at(1) - arr->at(0);
    for (int i = 1; i < (int)(arr->size() - 2); i++) {
        if ((arr->at(i + 1) - arr->at(i)) < min)
            min = (arr->at(i + 1) - arr->at(i));
    }
    return min;
}

void span::addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end) {
    for (std::vector<int>::iterator i = beg; i != end; i++) {
        if (*i >= (int)limit)
            throw ArrayOverflowException();
        else
            arr->push_back(*i);
    }
}

span::span() {}

