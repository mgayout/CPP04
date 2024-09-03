/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:05:05 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 16:05:05 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i != 4; i++)
		this->_inventory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i != 4; i++)
		this->_inventory[i] = other._inventory[i]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i != 4; i++)
		this->_inventory[i] = other._inventory[i]->clone();
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i != 4; i++)
	{
		if (this->_inventory[i])
			delete  this->_inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;

	while (i < 4 && this->_inventory[i] != 0)
		i++;
	if (i > 3)
		std::cout << "Materia " << m->getType() << " could not be learned, because inventory is full (4/4)." << std::endl;
	else
	{
		std::cout << "Materia " << m->getType() << " has been learned." << std::endl;
		this->_inventory[i] = m;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	int	i = 0;

	while (i < 4 && this->_inventory[i] && this->_inventory[i]->getType() != type)
		i++;
	if (!type.size())
		std::cout << "void Materia could not be created." << std::endl;
	else if (i > 3 || (type.size() && !this->_inventory[i]))
		std::cout << "Materia \"" << type << "\" could not be created." << std::endl;
	else
	{
		std::cout << "Materia " << type << " has been created." << std::endl;
		return this->_inventory[i]->clone();
	}
	return NULL;
}
