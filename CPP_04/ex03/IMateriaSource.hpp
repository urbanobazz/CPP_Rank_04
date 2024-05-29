/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:42:01 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 17:13:41 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource( void ) {}
		virtual void learnMateria( AMateria *m ) = 0;
		virtual AMateria *createMateria( std::string const &type ) = 0;
};

#endif
