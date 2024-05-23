/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:29:50 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/23 18:15:43 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

/* int main(void) {
	Fixed a(2);
	Fixed const b(5.05f);

	std::cout << "--------- Incrementing tests -------------" << std::endl;
	std::cout << "Initial value of a: " << a << std::endl;
	std::cout << "Value of a after pre-increment: " << ++a << std::endl;
	std::cout << "Value of a after post-increment: " << a++ << std::endl;
	std::cout << "Final value of a: " << a << std::endl;

	std::cout << "----------- Get Max -----------" << std::endl;
	std::cout << "Value of b: " << b << std::endl;
	std::cout << "Max of a and b: " << Fixed::max(a, b) << std::endl;

	std::cout << "--------- Decrementing tests -------------" << std::endl;
	std::cout << "Value of a after pre-decrement: " << --a << std::endl;
	std::cout << "Value of a after post-decrement: " << a-- << std::endl;
	std::cout << "Final value of a: " << a << std::endl;

	std::cout << "----------- Get Min -----------" << std::endl;
	std::cout << "Min of a and b: " << Fixed::min(a, b) << std::endl;

	std::cout << "----------- Arithmetic tests -----------" << std::endl;
	std::cout << "a plus b: " << a + b << std::endl;
	std::cout << "a minus b: " << a - b << std::endl;
	std::cout << "a divided by b: " << a / b << std::endl;
	std::cout << "a multiplied by b: " << a * b << std::endl;

	std::cout << "----------- Comparison tests -----------" << std::endl;
	std::cout << "Value of a: " << a << " | Value of b: " << b << std::endl;
	std::cout << "Is a less than b? " << (a < b) << std::endl;
	std::cout << "Is a greater than b? " << (a > b) << std::endl;
	std::cout << "Is a less than or equal to b? " << (a <= b) << std::endl;
	std::cout << "Is a greater than or equal to b? " << (a >= b) << std::endl;
	std::cout << "Is a equal to b? " << (a == b) << std::endl;
	std::cout << "Is a not equal to b? " << (a != b) << std::endl;

	return 0;
} */
