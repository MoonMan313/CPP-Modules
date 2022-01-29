//
// Created by evelina on 15.10.2021.
//

#include "Contact.hpp"

Contact::Contact() : empty(0) {}

const std::string &Contact::getFirstName() const {
	return first_name;
}

void Contact::setFirstName(const std::string &firstName) {
	first_name = firstName;
}

const std::string &Contact::getLastName() const {
	return last_name;
}

void Contact::setLastName(const std::string &lastName) {
	last_name = lastName;
}

const std::string &Contact::getNickname() const {
	return nickname;
}

void Contact::setNickname(const std::string &nickname) {
	Contact::nickname = nickname;
}

const std::string &Contact::getPhoneNumber() const {
	return phone_number;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
	phone_number = phoneNumber;
}

const std::string &Contact::getDarkestSecret() const {
	return darkest_secret;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	darkest_secret = darkestSecret;
}

int Contact::getEmpty() const {
	return empty;
}

void Contact::setEmpty(int empty) {
	Contact::empty = empty;
}
