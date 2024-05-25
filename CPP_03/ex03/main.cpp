/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:17:00 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/25 13:55:13 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap player1("SpongeBob");
	std::cout << std::endl;
	ScavTrap player2("Patrik");
	std::cout << std::endl;
	FragTrap player3("Squidward");
	std::cout << std::endl;
	ClapTrap player4("Gary");

	std::cout << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	player1.whoAmI();
	std::cout << "Hit Points: " << player1.getHitPoints() <<  " Attack Damage: " << player1.getAttackDamage()
	<< " Energy Points: " << player1.getEnergyPoints() << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << player2.getName() << std::endl;
	std::cout << "Hit Points: " << player2.getHitPoints() <<  " Attack Damage: " << player2.getAttackDamage()
	<< " Energy Points: " << player2.getEnergyPoints() << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << player3.getName() << std::endl;
	std::cout << "Hit Points: " << player3.getHitPoints() <<  " Attack Damage: " << player3.getAttackDamage()
	<< " Energy Points: " << player3.getEnergyPoints() << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << player4.getName() << std::endl;
	std::cout << "Hit Points: " << player4.getHitPoints() <<  " Attack Damage: " << player4.getAttackDamage()
	<< " Energy Points: " << player4.getEnergyPoints() << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
	return 0;
}
