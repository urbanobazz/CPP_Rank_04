/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:02:16 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 15:08:28 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	_brain = new Brain();
}

Dog::Dog( Dog const &other ) {
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
