/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:01:20 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 12:10:05 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the animal sound!
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	return 0;
}

/* #include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete i;
	return 0;
} */
