/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:10:42 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/20 16:26:35 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl(void);
		~Harl(void);

		void complain(std::string level) const;
	private:

		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;
};

#endif
