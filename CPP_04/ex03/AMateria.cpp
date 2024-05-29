/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:40:41 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 17:04:56 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
	//std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria( std::string const &type ) : _type(type) {
	//std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria( AMateria const &other ) {
	//std::cout << "AMateria copy constructor called" << std::endl;
	*this = other;
}

AMateria::~AMateria( void ) {
	//std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=( AMateria const &other ) {
	//std::cout << "AMateria assignation operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

std::string const &AMateria::getType( void ) const {
	return this->_type;
}

void AMateria::use( ICharacter &target ) {
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

