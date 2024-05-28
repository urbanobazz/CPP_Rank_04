/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane <ubazzane@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:01:54 by ubazzane          #+#    #+#             */
/*   Updated: 2024/05/28 15:42:14 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string _type;
		AAnimal(void);
		AAnimal(AAnimal const &other);
		virtual ~AAnimal(void);

	public:
		AAnimal &operator=(AAnimal const &other);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif
