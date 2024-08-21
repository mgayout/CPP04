/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:35:47 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 14:35:47 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "A Cat has appeared!" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "A Cat has appeared!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "A Cat has appeared!" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	this->type = other.type;
	std::cout << "A Cat has appeared!" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Bye Bye ..." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Miaou!" << std::endl;
}