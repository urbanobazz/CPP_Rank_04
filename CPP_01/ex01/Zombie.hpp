/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:42:56 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 16:20:23 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);

	private:
		std::string	_name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
