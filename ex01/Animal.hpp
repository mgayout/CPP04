/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:41:23 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 14:41:23 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
			Animal();
			Animal(std::string type);
			Animal(const Animal& other);
			Animal& operator=(const Animal& other);
			virtual ~Animal();
			std::string		getType() const;
			virtual void	makeSound() const;

	protected:
			std::string	type;

};

#endif