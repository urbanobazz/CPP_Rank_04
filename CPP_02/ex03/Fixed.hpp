/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:30:11 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/23 19:53:27 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <cstdlib>

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

		//comparison operators
		bool operator>( Fixed const & other ) const;
		bool operator<( Fixed const & other ) const;
		bool operator>=( Fixed const & other ) const;
		bool operator<=( Fixed const & other ) const;
		bool operator==( Fixed const & other ) const;
		bool operator!=( Fixed const & other ) const;

		//arithmetic operators
		Fixed operator+( Fixed const & other ) const;
		Fixed operator-( Fixed const & other ) const;
		Fixed operator/( Fixed const & other ) const;
		Fixed operator*( Fixed const & other ) const;

		//increment/decrement operators
		Fixed & operator++( void );
		Fixed operator++( int );
		Fixed & operator--( void );
		Fixed operator--( int );

		//static min/max functions
		static Fixed & min( Fixed & a, Fixed & b );
		static Fixed & max( Fixed & a, Fixed & b );
		static Fixed const & min( Fixed const & a, Fixed const & b );
		static Fixed const & max( Fixed const & a, Fixed const & b );

	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
};

std::ostream & operator<<(std::ostream & stream, Fixed const & other);


#endif
