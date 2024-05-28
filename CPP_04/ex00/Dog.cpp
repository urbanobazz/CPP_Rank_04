/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:02:16 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/25 16:11:31 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( Dog const &other ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=( Dog const &other ) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof" << std::endl;
}

