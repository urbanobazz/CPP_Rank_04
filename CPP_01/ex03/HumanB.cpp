/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:32:26 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 20:15:37 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {return;}

HumanB::~HumanB(void) {return;}


void HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with his "
		<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
