/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:32:04 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/22 16:50:34 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"

PhoneBook::PhoneBook(void) {
	_contactCount = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::print_header(void)
{
	system("clear");
	std::cout << "******** WELCOME TO MY AWESOME PHONEBOOK ********" << std::endl;
	std::cout << "*                                               *" << std::endl;
	std::cout << "*        ADD - Add a new contact.               *" << std::endl;
	std::cout << "*        SEARCH - Display contacts.             *" << std::endl;
	std::cout << "*        EXIT - Exit the phonebook.             *" << std::endl;
	std::cout << "*                                               *" << std::endl;
	std::cout << "*************************************************" << std::endl;
}

std::string	PhoneBook::_truncateString(std::string str) {
	if (str.length() > 10) {
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	PhoneBook::addContact(void) {
	int			index;
	Contact		newContact;
	std::string	value;

	index = this->_contactCount % this->_maxIndex;
	while (newContact.getFirstName().empty()) {
		print_header();
		std::cout << "Please enter the contact's first name: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ;
		newContact.setFirstName(value);
	}
	while (newContact.getLastName().empty()) {
		print_header();
		std::cout << "Please enter the contact's last name: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ;
		newContact.setLastName(value);
	}
	while (newContact.getNickname().empty()) {
		print_header();
		std::cout << "Please enter the contact's nickname: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ;
		newContact.setNickname(value);
	}
	while (newContact.getPhoneNumber().empty()) {
		print_header();
		std::cout << "Please enter the contact's phone number: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ;
		newContact.setPhoneNumber(value);
	}
	while (newContact.getDarkestSecret().empty()) {
		print_header();
		std::cout << "Please enter the contact's darkest secret: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ;
		newContact.setDarkestSecret(value);
	}
	this->_contacts[index] = newContact;
	print_header();
	std::cout << "Contact added successfully!" << std::endl;
	this->_contactCount++;
	return;
}

void	PhoneBook::searchContact(void) {

	if (this->_contactCount == 0) {
		std::cout << "Phone book is empty!" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < _contactCount && i < _maxIndex; i++) {
		std::cout << std::setw(10) << i << "|" << std::setw(10)
			<< _truncateString(this->_contacts[i].getFirstName()) << "|" << std::setw(10)
			<< _truncateString(this->_contacts[i].getLastName()) << "|" << std::setw(10)
			<< _truncateString(this->_contacts[i].getNickname()) << std::endl;
	}
	while(1)
	{
		int i;
		std::cout << "Please enter the index of the contact you want to display: ";
		std::cin >> i;
		if (std::cin.fail() || i < 0 || i >= _contactCount || i >= _maxIndex)
		{
			std::cin.clear();
			std::cin.ignore(256, '\n');
			if (_contactCount >= _maxIndex)
				std::cout << "Invalid index! It must in between 0 and " << _maxIndex - 1 << std::endl;
			else
				std::cout << "Invalid index! It must in between 0 and " << _contactCount - 1 << std::endl;
		}
		else
		{
			print_header();
			std::cout << "First Name: " << _contacts[i].getFirstName() << std::endl;
			std::cout << "Last Name: " << _contacts[i].getLastName() << std::endl;
			std::cout << "Nickname: " << _contacts[i].getNickname() << std::endl;
			std::cout << "Phone Number: " << _contacts[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << _contacts[i].getDarkestSecret() << std::endl;
			std::cout << "*************************************************" << std::endl;
			std::cin.ignore(256, '\n');
			return;
		}
	}
}
