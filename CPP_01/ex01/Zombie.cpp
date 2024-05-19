/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:43:08 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 16:20:48 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) { return; }

Zombie::~Zombie(void) {
	std::cout << this->_name << ": " << "I'm dead, but I'll be back!" << std::endl;
 }

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": " <<"BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
