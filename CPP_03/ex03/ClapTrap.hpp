/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:17:12 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/25 13:27:44 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & other);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const & other);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;
		std::string getName(void) const;

		void setAttackDamage(int damage);
		void setName(std::string name);
		void setEnergyPoints(int energyPoints);

	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
};

#endif
