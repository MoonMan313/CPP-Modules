#include "Karen.hpp"
#include <cstring>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "An example of using the program: ./karenFilter \"WARNING\"" << std::endl;
        return (0);
    }

    Karen say;
    const char *levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4) {
        if (!strcmp((const char *) argv[1], levels[i]))
            break;
        ++i;
    }
    if (i == 4) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }

    switch (i) {
        case 0:
            say.complain("debug");
        case 1:
            say.complain("info");
        case 2:
            say.complain("warning");
        default:
            say.complain("error");
    }
    return (0);
}
