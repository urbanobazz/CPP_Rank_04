/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:59:21 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 12:04:27 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &other )
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &other )
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string WrongAnimal::getType( void ) const
{
	return this->_type;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal makes a sound" << std::endl;
}
