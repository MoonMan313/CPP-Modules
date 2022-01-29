//
// Created by evelina on 15.10.2021.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

int PhoneBook::check_valid_nick(const std::string nick){
	for(int i = 0; nick[i] != '\0'; ++i){
		if (nick.empty() || !std::isalnum(nick[i]))
			return (0);
		if (i == 30)
			return (0);
	}
	return (1);
}

int PhoneBook::check_valid_name(const std::string name){
	for(int i = 0; name[i] != '\0'; ++i){
		if (name.empty() || !std::isalpha(name[i]))
			return (0);
		if (i == 30)
			return (0);
	}
	return (1);
}


int PhoneBook::check_valid_number(const std::string number) {
	for(int i = 0; number[i] != '\0'; ++i){
		if (number.empty() || !std::isdigit(number[i]))
			return (0);
		if (i == 11)
			return (0);
	}
	return (1);
}

void PhoneBook::get_data(std::string &val, std::string message, int flag) {
	std::cout << message << std::endl;
	std::cin >> val;
	if (flag == 1) {
		while (check_valid_name(val) == false) {
			std::cout << "The entered data is not correct, please try again." << std::endl;
			std::cin >> val;
		}
	} else if (flag == 0) {
		while (check_valid_number(val) == false) {
			std::cout << "The entered data is not correct, please try again." << std::endl;
			std::cin >> val;
		}
	} else {
		while (check_valid_nick(val) == false) {
			std::cout << "The entered data is not correct, please try again." << std::endl;
			std::cin >> val;
		}
	}
}

void PhoneBook::add() {

	std::string val;
	get_data(val, "--------- Please enter a first name ---------", 1);
	contacts[index].setFirstName(val);
	get_data(val, "--------- Enter a last name -----------------", 1);
	contacts[index].setLastName(val);
	get_data(val, "--------- Enter a nickname ------------------", 2);
	contacts[index].setNickname(val);
	get_data(val, "--------- Enter a phone number --------------", 0);
	contacts[index].setPhoneNumber(val);
	std::cout << "--------- Enter a darkest secret ------------" << std::endl;
	std::cin >> val;
	contacts[index].setDarkestSecret(val);
	contacts[index].setEmpty(1);
	index++;
	if (index == 8)
		index = 0;
	std::cout << "The contact has been successfully saved." << std::endl;
}

void PhoneBook::table_field(int index, const std::string first_n,
							const std::string last_n, const std::string nick) {
	if (index == -1)
		std::cout << "|" <<std::setw(10) << "index" << "|";
	else
		std::cout << "|" <<std::setw(10) << (index + 1) << "|";
	if (first_n.length() < 10)
		std::cout << std::setw(10) << first_n << "|";
	else
		std::cout << first_n.substr(0, 9) << "." << "|";
	if (last_n.length() < 10)
		std::cout << std::setw(10) << last_n << "|";
	else
		std::cout << last_n.substr(0, 9) << "." << "|";
	if (nick.length() < 10)
		std::cout << std::setw(10) << nick << "|" << std::endl;
	else
		std::cout << nick.substr(0, 9) << "." << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::search(){
	if (contacts[0].getEmpty() == 0)
		std::cout << "The contact list is empty." << std::endl;
	else{
		std::cout << "---------------------------------------------" << std::endl;
		table_field(-1, "first name", "last name", "nickname");
		for(int i = 0; i < 8 && contacts[i].getEmpty(); ++i){
			table_field(i, contacts[i].getFirstName(),
						contacts[i].getLastName(), contacts[i].getNickname());
		}
	}
	std::string val;
	get_data(val, "Enter the contact's index to display complete information.", 0);
	int i = atoi(val.c_str());
	if (i > 0 && i < 9 && contacts[i - 1].getEmpty()){
		i--;
		std::cout << "First name: " << contacts[i].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
		std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "There are no contacts with this index in the PhoneBook." << std::endl;

}

