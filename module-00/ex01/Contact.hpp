//
// Created by evelina on 15.10.2021.
//

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	int empty;

public:
	Contact();

	int getEmpty() const;

	void setEmpty(int empty);

	const std::string &getFirstName() const;

	void setFirstName(const std::string &firstName);

	const std::string &getLastName() const;

	void setLastName(const std::string &lastName);

	const std::string &getNickname() const;

	void setNickname(const std::string &nickname);

	const std::string &getPhoneNumber() const;

	void setPhoneNumber(const std::string &phoneNumber);

	const std::string &getDarkestSecret() const;

	void setDarkestSecret(const std::string &darkestSecret);


};


#endif //CLASS_CONTACT_HPP
