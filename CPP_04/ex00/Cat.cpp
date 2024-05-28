/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:02:53 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/25 16:11:41 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat( Cat const &other ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=( Cat const &other ) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}
