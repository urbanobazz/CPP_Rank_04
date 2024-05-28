/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:01:54 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 13:50:22 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(Animal const &other);
		virtual ~Animal(void);

		Animal &operator=(Animal const &other);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
