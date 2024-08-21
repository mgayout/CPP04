/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:35:41 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 14:35:41 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "A Dog has appeared!" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "A Dog has appeared!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "A Dog has appeared!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	this->type = other.type;
	std::cout << "A Dog has appeared!" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Bye Bye ..." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog : Wouf!" << std::endl;
}
