//
// Created by evelina on 15.10.2021.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

#define MAX_NUM 8

class PhoneBook {
private:
	int index;
	Contact contacts[MAX_NUM];

	int check_valid_number(const std::string number);
	int check_valid_name(const std::string name);
	int check_valid_nick(const std::string nick);
	void get_data(std::string &val, std::string message, int flag);
	void table_field(int index, const std::string first_n,
					 const std::string last_n, const std::string nick) ;

public:

	PhoneBook();
	void add();
	void search();
};


#endif //PHONEBOOK_HPP
