#include <iostream>
#include "iter.hpp"

void print(int const&b){
    std::cout << b << std::endl;
}

int main() {
    int *p_n = new int[10];
    for(int i = 0; i < 10; i++)
        p_n[i] = i;
    iter(p_n, 10, print);
    return 0;
}
