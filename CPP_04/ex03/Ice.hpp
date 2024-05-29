/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:49:35 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 17:16:22 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		Ice( Ice const &other );
		virtual ~Ice( void );

		Ice &operator=( Ice const &other );

		AMateria *clone( void ) const;
		void use( ICharacter &target );
};

#endif
