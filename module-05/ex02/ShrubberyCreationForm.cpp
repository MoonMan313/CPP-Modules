//
// Created by evelina on 30.10.2021.
//

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("Shrubbery Creation", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    this->target = copy.target;
    return *this;
}

void ShrubberyCreationForm::executeAction() const {
    std::string FileName;
    FileName = target + "_shrubbery";
    std::ofstream File;

    File.open(FileName.c_str());
    if (File.is_open()){
        File << "        __ _.--..--._ _\n"
                "     .-' _/   _/\\_   \\_'-.\n"
                "    |__ /   _/\\__/\\_   \\__|\n"
                "       |___/\\_\\__/  \\___|\n"
                "              \\__/\n"
                "              \\__/\n"
                "               \\__/\n"
                "                \\__/\n"
                "             ____\\__/___\n"
                "       . - '             ' -.\n"
                "      /                      \\\n"
                "~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~\n"
                "  ~~~   ~~~~~   ~!~~   ~~ ~  ~ ~ ~pjb\n"
                "\n"
                << std::endl;
    }
    else{
        std::cout << "Error:\nCan't create file" << std::endl;
    }

}
