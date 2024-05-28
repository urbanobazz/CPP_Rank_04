/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:02:29 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 15:08:22 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( Dog const & other );
		~Dog( void );

		Dog & operator=( Dog const & other );

		void	makeSound( void ) const;
		Brain*	getBrain( void ) const;

	private:
		Brain* _brain;
};

#endif
