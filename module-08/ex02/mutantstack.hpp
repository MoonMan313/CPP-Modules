//
// Created by evelina on 01.11.2021.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() : std::stack<T>(){}
    MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
    virtual ~MutantStack() {}
    MutantStack &operator=(const MutantStack &copy) {
        if (this != &copy)
            std::stack<T>::operator=(copy);
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin() {
        return std::stack<T>::c.begin();
    }

    iterator end() {
        return std::stack<T>::c.end();
    }

};


#endif //EX02_MUTANTSTACK_HPP
