/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:01:20 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/31 11:30:49 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	std::cout << meta->getType() << " meta" << std::endl;
	std::cout << dog->getType() << " dog" << std::endl;
	std::cout << cat->getType() << " cat" << std::endl;
	std::cout << std::endl;
	meta->makeSound(); //will output the animal sound!
	dog->makeSound(); //will output the dog sound!
	cat->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;

	std::cout << "------------------ Wrong animal tests -----------------" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wanimal = new WrongCat();
	const WrongCat* wcat = new WrongCat();
	std::cout << std::endl;
	std::cout << wmeta->getType() << " wmeta" << std::endl;
	std::cout << wanimal->getType() << " wanimal" << std::endl;
	std::cout << wcat->getType() << " wcat" << std::endl;
	std::cout << std::endl;
	wmeta->makeSound();
	wanimal->makeSound(); // unable to call makeSound() from WrongCat
	wcat->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	delete wmeta;
	delete wanimal;
	delete wcat;
	return 0;
}
