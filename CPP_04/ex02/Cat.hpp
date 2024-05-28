/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:02:40 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 15:44:54 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat( void );
		Cat( Cat const & other );
		~Cat( void );

		Cat & operator=( Cat const & other );

		void	makeSound( void ) const;
		Brain*	getBrain( void ) const;

	private:
		Brain* _brain;
};

#endif
