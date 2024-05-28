/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:59:50 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 12:04:53 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const &other )
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=( WrongCat const &other )
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat makes a sound" << std::endl;
}

