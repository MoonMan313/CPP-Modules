#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <cstdlib>

void    toChar(char *av){
    try {
        if (isascii(atoi(av))) {
            if (isprint(atoi(av)))
                std::cout << static_cast<char>(atoi(av)) << std::endl;
            else std::cout << "Non displayable" << std::endl;
        }
        else std::cout << "impossible" << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::overflow_error& e) {
        std::cout << "impossible" << std::endl;
    }
}

void toInt(char *av){
    try {
        std::cout << atoi(av) << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::overflow_error& e) {
        std::cout << "impossible" << std::endl;
    }
}

void    toFloat(char *av){
    try {
        std::cout << std::fixed  << std::setprecision(1) << atof(av) << "f" << std::endl;
    }
    catch (std::invalid_argument const&) {
        std::cout << "impossible" << std::endl;
    }
}

void toDouble(char *av){
    try {
        std::cout << std::fixed << std::setprecision(1) << atof(av) << std::endl;
    }
    catch (std::invalid_argument const&) {
        std::cout << "impossible" << std::endl;
    }
}

void    conver(char *av) {
    std::cout << "char: ";
    toChar(av);
    std::cout << "int: ";
    toInt(av);
    std::cout << "float: ";
    toFloat(av);
    std::cout << "double: ";
    toDouble(av);
}

int is_inf(std::string const str, char *av){
    if (str == "-inf" || str == "+inf" || str == "nan") {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << atof(av) << "f" << std::endl;
        std::cout << "double: " << atof(av) << std::endl;
        return 1;
    }
    return 0;
}

int     main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Error: The program only takes one argument." << std::endl;
        return 1;
    }
    std::string str = static_cast<std::string>(argv[1]);
    if (is_inf(str, argv[1]))
        return 0;
    conver(argv[1]);
    return 0;
}