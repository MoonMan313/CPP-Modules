//
// Created by evelina on 30.10.2021.
//

#ifndef EX01_SERIALIZE_HPP
#define EX01_SERIALIZE_HPP


#include <stdint.h>
#include <string>

struct Data{
    int index;
    bool status;
    std::string data;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif //EX01_SERIALIZE_HPP
