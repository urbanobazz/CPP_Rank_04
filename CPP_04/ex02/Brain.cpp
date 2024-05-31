/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:42:38 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/31 11:45:21 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::stringstream ss;
		ss << "Idea " << i;
		this->ideas[i] = ss.str();
	}
}

Brain::Brain(Brain const &other) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &other) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const {
	return this->ideas[index];
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
}

