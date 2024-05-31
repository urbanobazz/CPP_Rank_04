/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:02:53 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/31 15:51:30 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : _brain(new Brain()) {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat( Cat const &other ) : _brain(NULL) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=( Cat const &other ) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
		this->_type = other._type;
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, other._brain->getIdea(i));
	}
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}

Brain*	Cat::getBrain( void ) const {
	return _brain;
}
