/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:39:27 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/20 15:18:36 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

class	Replace
{
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace(void);
		void	replaceString(void);
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
		std::ifstream	_file;
		std::ofstream	_output;
};
