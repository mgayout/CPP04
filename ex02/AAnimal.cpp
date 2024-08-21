/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:55:04 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/20 11:55:04 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("none")
{
	std::cout << "A new Animal (none) has appeared!" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "A new Animal (" << this->type << ") has appeared!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type)
{
	std::cout << "A new Animal (" << this->type << ") has appeared!" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	this->type = other.type;
	std::cout << "A new Animal (" << this->type << ") has appeared!" << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal (" << this->type << "): Bye Bye ..." << std::endl;
}

std::string	AAnimal::getType() const
{
	return this->type;
}

void	AAnimal::makeSound() const
{
	std::cout << "Animal (" << this->type << "): ..." << std::endl;
}