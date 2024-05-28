/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:01:39 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 12:31:24 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal"){
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &other) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

AAnimal::~AAnimal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &other) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string AAnimal::getType(void) const {
	return this->_type;
}
