/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:28:44 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/19 19:55:10 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string&	getType(void) const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
