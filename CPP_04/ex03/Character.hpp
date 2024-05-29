/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:48:58 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 17:16:55 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Character( void );
		Character( std::string const &name );
		Character( Character const &other );
		virtual ~Character( void );

		Character &operator=( Character const &other );

		std::string const &getName( void ) const;
		void equip( AMateria *m );
		void unequip( int idx );
		void use( int idx, ICharacter &target );
};

#endif
