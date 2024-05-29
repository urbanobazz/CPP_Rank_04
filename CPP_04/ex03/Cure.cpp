/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:50:28 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 17:05:21 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
	//std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( Cure const &other ) : AMateria(other) {
	//std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure( void ) {
	//std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=( Cure const &other ) {
	(void)other;
	//std::cout << "Cure assignation operator called" << std::endl;
	return *this;
}

AMateria *Cure::clone( void ) const {
	//std::cout << "Cure clone called" << std::endl;
	return new Cure(*this);
}

void Cure::use( ICharacter &target ) {
	std::cout<< "* heals " << target.getName() << "'s wounds *" << std::endl;
}

