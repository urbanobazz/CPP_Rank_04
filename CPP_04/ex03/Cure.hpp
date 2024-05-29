/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:50:19 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 17:19:46 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure( void );
		Cure( Cure const &src );
		virtual ~Cure( void );

		Cure & operator=( Cure const &rhs );

		virtual AMateria *clone( void ) const;
		virtual void use( ICharacter &target );
};

#endif
