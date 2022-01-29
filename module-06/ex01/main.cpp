#include <iostream>
#include "Serialize.hpp"

int main() {
    Data *course = new Data();
    course->data = "mathematics";
    course->index = 3;
    course->status = 0;

    std::cout << course << std::endl;
    std::cout << course->data << std::endl;
    std::cout << course->index << std::endl;
    std::cout << course->status << std::endl;

    std::cout << "------Serialize------" << std::endl;
    uintptr_t raw = serialize(course);

    std::cout << "-----Deserialize------" << std::endl;
    Data *after = deserialize(raw);

    std::cout << after << std::endl;
    std::cout << after->data << std::endl;
    std::cout << after->index << std::endl;
    std::cout << after->status << std::endl;

    return 0;
}
