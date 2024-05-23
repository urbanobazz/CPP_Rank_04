/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:30:22 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/23 15:37:46 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & other ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

Fixed::Fixed( const int intValue ) {
	_fixedPointValue = intValue << _fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float floatValue ) {
	_fixedPointValue = roundf(floatValue * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const {
	return (float)_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const {
	return _fixedPointValue >> _fractionalBits;
}

std::ostream & operator<<(std::ostream & stream, Fixed const & other) {
	stream << other.toFloat();
	return stream;
}
