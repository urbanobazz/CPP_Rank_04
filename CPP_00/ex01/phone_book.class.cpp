/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:32:04 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/18 12:56:10 by ubazzane         ###   ########.fr       */
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
	while (newContact.firstName.empty()) {
		print_header();
		std::cout << "Please enter the contact's first name: ";
		std::getline(std::cin, value);
		newContact.firstName = value;
	}
	while (newContact.lastName.empty()) {
		print_header();
		std::cout << "Please enter the contact's last name: ";
		std::getline(std::cin, value);
		newContact.lastName = value;
	}
	while (newContact.nickname.empty()) {
		print_header();
		std::cout << "Please enter the contact's nickname: ";
		std::getline(std::cin, value);
		newContact.nickname = value;
	}
	while (newContact.phoneNumber.empty()) {
		print_header();
		std::cout << "Please enter the contact's phone number: ";
		std::getline(std::cin, value);
		newContact.phoneNumber = value;
	}
	while (newContact.darkestSecret.empty()) {
		print_header();
		std::cout << "Please enter the contact's darkest secret: ";
		std::getline(std::cin, value);
		newContact.darkestSecret = value;
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
			<< _truncateString(this->_contacts[i].firstName) << "|" << std::setw(10)
			<< _truncateString(this->_contacts[i].lastName) << "|" << std::setw(10)
			<< _truncateString(this->_contacts[i].nickname) << std::endl;
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
			std::cout << "Invalid index! It must in between 0 and " << _contactCount - 1 << std::endl;
		}
		else
		{
			print_header();
			std::cout << "First Name: " << _contacts[i].firstName << std::endl;
			std::cout << "Last Name: " << _contacts[i].lastName << std::endl;
			std::cout << "Nickname: " << _contacts[i].nickname << std::endl;
			std::cout << "Phone Number: " << _contacts[i].phoneNumber << std::endl;
			std::cout << "Darkest Secret: " << _contacts[i].darkestSecret << std::endl;
			std::cout << "*************************************************" << std::endl;
			std::cin.ignore(256, '\n');
			return;
		}
	}
}
