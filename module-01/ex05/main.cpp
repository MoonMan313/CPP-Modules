#include "Karen.hpp"

int main(void) {
    Karen say;

    std::cout << "[DEBUG]" << std::endl;
    say.complain("debug");
    std::cout << "[INFO]" << std::endl;
    say.complain("info");
    std::cout << "[WARNING]" << std::endl;
    say.complain("warning");
    std::cout << "[ERROR]" << std::endl;
    say.complain("error");
}
