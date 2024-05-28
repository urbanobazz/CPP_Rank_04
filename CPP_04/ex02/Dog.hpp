/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:02:29 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 15:46:41 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
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
