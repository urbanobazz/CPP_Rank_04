/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:58:41 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 17:13:32 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : _count(0) {
	//std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &other ) {
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource( void ) {
	//std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_source[i])
			delete this->_source[i];
}

MateriaSource &MateriaSource::operator=( MateriaSource const &other ) {
	//std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (this->_source[i])
				delete this->_source[i];
			this->_source[i] = other._source[i]->clone();
		}
		this->_count = other._count;
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria *m ) {
	if (this->_count < 4) {
		std::cout << "Learning " << m->getType() << "..." << std::endl;
		this->_source[this->_count] = m;
		this->_count++;
	}
	else
	{
		std::cout << "Inventory is full, can't learn more materia" << std::endl;
		delete m;
	}
}

AMateria *MateriaSource::createMateria( std::string const &type ) {
	for (int i = 0; i < 4; i++) {
		if (this->_source[i] && this->_source[i]->getType() == type)
		{
			std::cout << "Creating " << type << "..." << std::endl;
			return this->_source[i]->clone();
		}
	}
	std::cout << "Materia " << type << " cannot be created (not learned)." << std::endl;
	return NULL;
}

