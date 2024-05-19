/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:43:27 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 16:18:35 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0 || name.empty())
		return NULL;
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		new (&horde[i]) Zombie(name);
	return horde;
}
