/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:19:16 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/29 19:22:56 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

//Barycentric coordinates method

static Fixed calculateArea(Point const& p1, Point const& p2, Point const& p3) {
	return (p1.getY() - p2.getY()) * (p3.getX() - p2.getX()) + (p2.getX() - p1.getX()) * (p3.getY() - p2.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed triangle = calculateArea(a, b, c);

	Fixed A = calculateArea(point, b, c) / triangle;
	Fixed B = calculateArea(a, point, c) / triangle;
	Fixed C = calculateArea(a, b, point) / triangle;

	return A >= Fixed(0) && B >= Fixed(0) && C >= Fixed(0);
}
