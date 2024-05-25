/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:19:57 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/25 13:59:11 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default Constructor called." << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "DiamondTrap constructor called." << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout << "DiamondTrap copy Constructor called." << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap assignation operator called." << std::endl;
	if (this == &other)
		return *this;
	_name = other.getName();
	_hitPoints = other.getHitPoints();
	_energyPoints = other.getEnergyPoints();
	_attackDamage = other.getAttackDamage();
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
