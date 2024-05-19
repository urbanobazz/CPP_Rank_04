/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:01:51 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 13:26:04 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie1 = newZombie("Zombie1");
	zombie1->announce();
	randomChump("Zombie2");
	delete zombie1;
	return (0);
}
