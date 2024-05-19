/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:29:42 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 20:10:17 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon) { return ;}

HumanA::~HumanA(void) { return ;}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his "
	<< this->_weapon.getType() << std::endl;
}


