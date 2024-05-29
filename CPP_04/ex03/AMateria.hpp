/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:40:28 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 17:40:28 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria( void );
		AMateria( std::string const &type );
		AMateria( AMateria const &other );
		virtual ~AMateria( void );

		AMateria &operator=( AMateria const &other );

		std::string const &getType( void ) const;
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter &target );
};

#endif
