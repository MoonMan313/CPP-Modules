//
// Created by evelina on 17.10.2021.
//

#include "Karen.hpp"

void Karen::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl
              << "I love to get extra bacon for my "
                 "7XL-double-cheese-triple-pickle-special-ketchup"
                 "burger. I just love it!" << std::endl;
}

void Karen::info(void) {
    std::cout << "[ INFO ]" << std::endl
              << "I cannot believe adding extra bacon cost more money."
                 "You don’t put enough! If you did I would not have "
                 "to ask for it!" << std::endl;
}

void Karen::warning(void) {

    std::cout << "[ WARNING ]" << std::endl
              << "I think I deserve to have some extra bacon for free."
                 "I’ve been coming here for years and you just started"
                 "working here last month." << std::endl;
}

void Karen::error(void) {
    std::cout << "[ ERROR ]" << std::endl
              << "This is unacceptable, I want to speak"
                 "to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
    for (int i = 0; i < 4; ++i) {
        if (level == this->name_function[i])
            (this->*pointer_function[i])();
    }
}

Karen::Karen() {

    pointer_function[0] = &Karen::debug;
    pointer_function[1] = &Karen::info;
    pointer_function[2] = &Karen::warning;
    pointer_function[3] = &Karen::error;

    name_function[0] = "debug";
    name_function[1] = "info";
    name_function[2] = "warning";
    name_function[3] = "error";

}
