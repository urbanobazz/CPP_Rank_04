/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:49:54 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 17:05:37 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
	//std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( Ice const &other ) : AMateria(other) {
	//std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice( void ) {
	//std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=( Ice const &other ) {
	(void)other;
	//std::cout << "Ice assignation operator called" << std::endl;
	return *this;
}

AMateria *Ice::clone( void ) const {
	//std::cout << "Ice clone called" << std::endl;
	return new Ice(*this);
}

void Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

