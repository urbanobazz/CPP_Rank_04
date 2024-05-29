/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:49:13 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 17:16:21 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("default") {
	//std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( std::string const &name ) : _name(name) {
	std::cout << "Character " << name << " created." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( Character const &other ) {
	//std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character::~Character( void ) {
	//std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=( Character const &other ) {
	//std::cout << "Character assignation operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName( void ) const {
	return this->_name;
}

void Character::equip( AMateria *m ) {
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			std::cout << "Equipping " << m->getType() << "..." << std::endl;
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "Inventory is full, can't equip more materia" << std::endl;
	delete m;
}

void Character::unequip( int idx ) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void Character::use( int idx, ICharacter &target ) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
		return;
	}
}

