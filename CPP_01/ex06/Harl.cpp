/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:11:35 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/20 18:17:49 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {return;}
Harl::~Harl() {return;}

void Harl::complain(std::string level) const
{
	int begin = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0 ; i < 4 ; i++){
		if (level == levels[i])
			begin += i + 1;
	}
	switch (begin){
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
			break;
		default:
			std::cout << "[UNKNOWN]" << std::endl;
			std::cout << "Harl is unable to complain at this level." <<std::endl;
	}
}

void Harl::debug(void) const
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-"
	<< "triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. "
	<< "You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I've been coming here for years and you just started"
	<< "working here last month." << std::endl;
}

void Harl::error(void) const
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable. I want to speak to the manager now." << std::endl;
}
