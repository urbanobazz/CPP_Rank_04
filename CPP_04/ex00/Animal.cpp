/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:01:39 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 11:40:48 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &other) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &other) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string Animal::getType(void) const {
	return this->_type;
}

void Animal::makeSound(void) const {
	std::cout << "Animal makes a sound" << std::endl;
}
