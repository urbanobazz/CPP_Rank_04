/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:59:08 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/31 14:49:45 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main( void ) {
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	AMateria *tmp2;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter *bob = new Character("bob");
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}

/* int main( void ) {
	std::cout << "----------------Creating MateriaSource---------------" << std::endl;
	IMateriaSource *src = new MateriaSource();
	std::cout << "----------------Learning Ice and Cure----------------" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "-------------------Create character------------------" << std::endl;
	ICharacter *me = new Character("me");
	std::cout << "---------------------Equip Materia-------------------" << std::endl;
	AMateria *tmp;
	AMateria *tmp2;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	me->equip(new Ice);
	me->equip(new Cure);
	std::cout << "-------------------Create character------------------" << std::endl;
	ICharacter *bob = new Character("bob");
	std::cout << "----------------------Use Materia---------------------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "--------------------Test unequip----------------------" << std::endl;
	me->unequip(0);
	me->use(0, *bob); // Should not have any effect
	std::cout << "--------------------Test re-equip---------------------" << std::endl;
	me->equip(tmp);
	me->use(0, *bob); // Should have effect again
	std::cout << "------------Test equip with full inventory------------" << std::endl;
	me->equip(new Ice); // Should not be able to equip, already at max capacity
	std::cout << "--------------Test use with invalid index-------------"  << std::endl;
	me->use(100, *bob); // Should not have any effect
	std::cout << "----------Test create a materia not learned-----------" << std::endl;
	AMateria *unknown = src->createMateria("unknown"); // Should be nullptr
	std::cout << "-------------------------The End----------------------" << std::endl;

	delete bob;
	delete me;
	delete src;
	delete unknown;

	return 0;
}
 */
