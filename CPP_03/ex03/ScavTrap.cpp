/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:36:46 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/25 14:08:21 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap(), _energyPoints(50) {
	std::cout << "ScavTrap Default Constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _energyPoints(50) {
	std::cout << "ScavTrap Constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other) {
	std::cout << "ScavTrap Copy Constructor called." << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap Assignation operator called." << std::endl;
	if (this == &other)
		return *this;
	_name = other.getName();
	_hitPoints = other.getHitPoints();
	_energyPoints = other.getEnergyPoints();
	_attackDamage = other.getAttackDamage();
	return *this;
}

void ScavTrap::attack(std::string const &target)
{
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target
	<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode." << std::endl;
}
