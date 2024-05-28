/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:42:27 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 14:04:23 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	public:

		Brain(void);
		Brain(Brain const &other);
		~Brain(void);
		Brain &operator=(Brain const &other);

		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);

	private:
	std::string ideas[100];
};

#endif
