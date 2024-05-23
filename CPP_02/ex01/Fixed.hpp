/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:30:11 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/23 15:37:59 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( Fixed const & other );
		Fixed( const int value );
		Fixed( const float value );
		~Fixed( void );

		Fixed & operator=( Fixed const & other );

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
};

std::ostream & operator<<(std::ostream & stream, Fixed const & other);

#endif
