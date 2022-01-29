//
// Created by evelina on 31.10.2021.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <algorithm>
#include <vector>

class span {
private:
    std::vector<int> *arr;
    unsigned int limit;
public:
    span();
    span(unsigned int n);
    span(const span &copy);
    span &operator=(const span &copy);
    virtual ~span();

    void addNumber(int x);
    void addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end);
    int longestSpan(void);
    int shortestSpan(void);

    std::vector<int> *getArr() const;
};


#endif //EX01_SPAN_HPP