/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:18:50 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 19:18:50 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "A WrongCat has appeared!" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "A WrongCat has appeared!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "A WrongCat has appeared!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	this->type = other.type;
	std::cout << "A WrongCat has appeared!" << std::endl;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Bye Bye ..." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat: Fiaou Fiaou Fiaou!" << std::endl;
}