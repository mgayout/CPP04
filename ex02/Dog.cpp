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

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "A Dog has appeared!" << std::endl;
	this->Brain_ = new Brain();
}

Dog::Dog(std::string type) : AAnimal(type)
{
	std::cout << "A Dog has appeared!" << std::endl;
	this->Brain_ = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	std::cout << "A Dog has appeared!" << std::endl;
	this->Brain_ = new Brain(*other.Brain_);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "A Dog has appeared!" << std::endl;
	this->type = other.type;
	this->Brain_ = new Brain(*other.Brain_);
	return *this;
}

Dog::~Dog(void)
{
	delete this->Brain_;
	std::cout << "Dog: Bye Bye ..." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog : Wouf!" << std::endl;
}

void	Dog::setNewIdea(std::string idea) const
{
	int	i = 0;

	while (this->Brain_->getIdea(i) != "" && i <= 99)
		i++;
	if (i > 99)
		std::cout << "This Animal is thinking too much !" << std::endl;
	else
		this->Brain_->setIdea(i, idea);
}

void	Dog::printIdeas() const
{
	for (int i = 0; this->Brain_->getIdea(i) != ""; i++)
		std::cout << "Idea n°" << i << ": " << this->Brain_->getIdea(i) << std::endl;
}
