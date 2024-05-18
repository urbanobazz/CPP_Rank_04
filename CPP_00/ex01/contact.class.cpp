/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:32:15 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/18 16:48:53 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string Contact::getFirstName() const { return _firstName; }

std::string Contact::getLastName() const { return _lastName; }

std::string Contact::getNickname() const { return _nickname; }

std::string Contact::getPhoneNumber() const { return _phoneNumber; }

std::string Contact::getDarkestSecret() const { return _darkestSecret; }

void Contact::setFirstName(const std::string &fn) { _firstName = fn; }

void Contact::setLastName(const std::string &ln) { _lastName = ln; }

void Contact::setNickname(const std::string &n) { _nickname = n; }

void Contact::setPhoneNumber(const std::string &pn) { _phoneNumber = pn; }

void Contact::setDarkestSecret(const std::string &ds) { _darkestSecret = ds; }
