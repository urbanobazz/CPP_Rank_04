/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:23:23 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/17 17:01:37 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

# include "contact.class.hpp"
# include <iomanip>

class	PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);

	void 	addContact(void);
	void	searchContact(void);
	void	print_header(void);

private:
	static const int	_maxIndex = 8;
	int					_contactCount;
	Contact				_contacts[_maxIndex];

	std::string	_truncateString(std::string str);
};

#endif
