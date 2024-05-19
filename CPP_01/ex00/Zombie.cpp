/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:02:08 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 12:26:35 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) { return; }

Zombie::~Zombie(void) {
	std::cout << this->_name << ": " << "I'm dead, but I'll be back!" << std::endl;
 }

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": " <<"BraiiiiiiinnnzzzZ..." << std::endl;
}

