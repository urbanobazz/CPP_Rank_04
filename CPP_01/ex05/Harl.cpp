/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:11:35 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 18:16:19 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {return;}
Harl::~Harl() {return;}

void Harl::complain(std::string level) const
{
	void (Harl::*member_funcs[4])() const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	bool matchFound = false;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*member_funcs[i])();
			matchFound = true;
			break;
		}
	}
	if (!matchFound)
		std::cout << "UNKNOWN: I don't know how to complain at this level." << std::endl;
}

void Harl::debug(void) const
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-"
	<< "triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "INFO: I cannot believe adding extra bacon cost more money. "
	<< "You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "WARNING: I've been coming here for years and you just started"
	<< "working here last month." << std::endl;
}

void Harl::error(void) const
{
	std::cout << "ERROR: This is unacceptable. I want to speak to the manager now." << std::endl;
}
