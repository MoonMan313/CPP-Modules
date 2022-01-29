#include <iostream>
#include <fstream>
#include <sstream>

static std::string replaceInLine(std::string buf,
                                 std::string str1, std::string str2) {
    std::size_t pos = buf.find(str1);
    for (int i = 1; pos != std::string::npos; i++) {
        buf.replace(pos, str1.size(), str2);
        pos = buf.find(str1.c_str(), pos + str2.size(), str1.size());
    }
    return (buf);
}

int main(int argc, char **argv) {
    if (argc != 4 && argv[1] != NULL && argv[2] != NULL && argv[3] != NULL) {
        std::cout << "example example of using the program:"
                  << "./replace [file name][string 1][string 2]" << std::endl;
        return (0);
    }
    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cout << "Failed to open file." << std::endl;
        return (1);
    }
    std::stringstream file_name;
    file_name << argv[1] << ".replace";
    std::ofstream new_file(file_name.str().c_str());
    if (!new_file.is_open()) {
        std::cout << "File not create." << std::endl;
        return (1);
    }
    std::string buf;
    while (std::getline(file, buf)) {
        new_file << replaceInLine(buf, argv[2], argv[3]) << std::endl;
    }
    new_file.close();
    file.close();


    return 0;
}
