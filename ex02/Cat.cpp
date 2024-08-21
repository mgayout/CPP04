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

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "A Cat has appeared!" << std::endl;
	this->Brain_ = new Brain();
}

Cat::Cat(std::string type) : AAnimal(type)
{
	std::cout << "A Cat has appeared!" << std::endl;
	this->Brain_ = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	std::cout << "A Cat has appeared!" << std::endl;
	this->Brain_ = new Brain(*other.Brain_);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "A Cat has appeared!" << std::endl;
	this->type = other.type;
	this->Brain_ = new Brain(*other.Brain_);
	return *this;
}

Cat::~Cat(void)
{
	delete this->Brain_;
	std::cout << "Cat: Bye Bye ..." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Miaou!" << std::endl;
}

void	Cat::setNewIdea(std::string idea) const
{
	int	i = 0;

	while (this->Brain_->getIdea(i) != "" && i <= 99)
		i++;
	if (i > 99)
		std::cout << "This Animal is thinking too much !" << std::endl;
	else
		this->Brain_->setIdea(i, idea);
}

void	Cat::printIdeas() const
{
	for (int i = 0; this->Brain_->getIdea(i) != ""; i++)
		std::cout << "Idea n°" << i << ": " << this->Brain_->getIdea(i) << std::endl;
}
