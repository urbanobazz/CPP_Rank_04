/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:17:00 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/24 15:58:44 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap player1("SpongeBob");
	FragTrap player2("Patrik");
	FragTrap player3("Squidward");

	std::cout << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	player1.attack("Squidward");
	player3.takeDamage(30);
	player3.beRepaired(30);
	player1.highFivesGuys();
	std::cout << std::endl;
	player2.attack("Squidward");
	player3.takeDamage(30);
	player3.beRepaired(30);
	player2.highFivesGuys();
	std::cout << std::endl;
	player3.attack("SpongeBob");
	player1.takeDamage(30);
	player1.beRepaired(30);
	player3.highFivesGuys();
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	return 0;
}
