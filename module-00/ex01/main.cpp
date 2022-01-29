#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook_features(void){
	std::cout << "PhoneBook features:\nADD		 create a new contact\n" <<
	"SEARCH	  get information about contacts\nEXIT		exit the program" << std::endl;
}

int main() {
	std::cout << "====== Welcome! This is the PhoneBook. ======" << std::endl;
	PhoneBook_features();
	PhoneBook PhBook;
	while (true) {
		std::string command;
		std::cin >> command;
		if (command == "ADD" || command == "add")
			PhBook.add();
		else if (command == "SEARCH" || command == "search")
			PhBook.search();
		else if (command == "EXIT" || command == "exit")
			std::exit(0);
		else if (command != "ADD" && command != "SEARCH" && command != "add" && command != "search")
			PhoneBook_features();
	}
	return 0;
}
