/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:51:37 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 14:51:37 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("none")
{
	std::cout << "A new Animal (none) has appeared!" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "A new Animal (" << this->type << ") has appeared!" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "A new Animal (" << this->type << ") has appeared!" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	this->type = other.type;
	std::cout << "A new Animal (" << this->type << ") has appeared!" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal (" << this->type << "): Bye Bye ..." << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal (" << this->type << "): ..." << std::endl;
}