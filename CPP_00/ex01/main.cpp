/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:17:21 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/22 16:52:09 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	phoneBook.print_header();
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			return (1);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
		{
			system("clear");
			std::cout << "PhoneBook exited successfully!" << std::endl;
			return (0);
		}
	}
	return (0);
}


