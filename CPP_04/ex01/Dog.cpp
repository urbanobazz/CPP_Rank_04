/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:02:16 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/31 15:10:23 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : _brain(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( Dog const &other ) : _brain(NULL) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=( Dog const &other ) {
	std::cout << "Dog assignation operator called" << std::endl;
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

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof" << std::endl;
}

Brain*	Dog::getBrain( void ) const {
	return _brain;
}
