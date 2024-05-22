/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:39:16 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/22 16:34:08 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
	if (_s1.empty() || _s2.empty())
	{
		std::cerr << "Error: Empty string" << std::endl;
		std::exit(1);
	}
	if (s1 == s2)
	{
		std::cerr << "Error: s1 and s2 are the same" << std::endl;
		std::exit(1);
	}
	_file.open(_filename.c_str());
	if (!_file.is_open())
	{
		std::cerr << "Error: Cannot open file" << std::endl;
		std::exit(1);
	}
	_output.open((_filename + ".replace").c_str());
	if (!_output.is_open())
	{
		std::cerr << "Error: Cannot create output file" << std::endl;
		std::exit(1);
	}
}

Replace::~Replace(void)
{
	_file.close();
	_output.close();
}

void Replace::replaceString(void)
{
	std::string line;
	while (std::getline(_file, line))
	{
		size_t pos = 0;
		while ((pos = line.find(_s1, pos)) != std::string::npos)
		{
			line.erase(pos, _s1.length());
			line.insert(pos, _s2);
			pos += _s2.length();
		}
		_output << line << std::endl;
	}
}
