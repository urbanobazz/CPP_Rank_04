/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:29:04 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 20:02:00 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) { return ;}

Weapon::~Weapon(void) { return ;}

const std::string&	Weapon::getType(void) const
{
	std::string const &ref = this->_type;
	return (ref);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
