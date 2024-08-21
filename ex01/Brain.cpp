/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:36:52 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/20 09:36:52 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A Brain has appeared!" << std::endl;
	this->ideas = new std::string[100];
}

Brain::Brain(const Brain& other)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "A Brain has appeared!" << std::endl;
}

Brain& Brain::operator=(Brain other)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "A Brain has appeared!" << std::endl;
	return *this;
}

Brain::~Brain()
{
	if (ideas)
		delete[] ideas;
	std::cout << "Brain: Bye Bye ..." << std::endl;
}

void	Brain::setIdea(int i, const std::string idea)
{
	ideas[i] = idea;
}

std::string	Brain::getIdea(int n)
{
	return ideas[n];
}
