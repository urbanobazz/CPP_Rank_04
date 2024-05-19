/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:42:37 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 16:22:28 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int num = 5;
	Zombie* horde = zombieHorde(num, "Walker");
	for (int i = 0; i < num; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
