/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:59:06 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 12:01:00 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal(void);

		WrongAnimal &operator=(WrongAnimal const &rhs);

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif
