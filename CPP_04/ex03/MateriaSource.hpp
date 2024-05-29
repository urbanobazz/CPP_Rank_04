/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:58:29 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 14:02:41 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*_source[4];
		int			_count;

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const &other );
		virtual ~MateriaSource( void );

		MateriaSource & operator=( MateriaSource const &other );

		virtual void learnMateria( AMateria *m );
		virtual AMateria *createMateria( std::string const &type );
};

#endif
