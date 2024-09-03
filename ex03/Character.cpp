/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:01:34 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 16:01:34 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default")
{
	for (int i = 0; i != 4; i++)
		this->_inventory[i] = 0;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i != 4; i++)
		this->_inventory[i] = 0;
}

Character::Character(const Character& other) : _name(other._name)
{
	for (int i = 0; i != 4; i++)
		this->_inventory[i] = other._inventory[i]->clone();
}

Character& Character::operator=(const Character& other)
{
	for (int i = 0; i != 4; i++)
		this->_inventory[i] = other._inventory[i]->clone();
	return *this;
}

Character::~Character()
{
	for (int i = 0; i != 4; i++)
	{
		if (this->_inventory[i])
			delete  this->_inventory[i];
	}
}

const std::string&	Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	int	i = 0;

	if (!m)
		std::cout << "void Materia could not be equiped." << std::endl;
	else
	{
		while (i < 4 && this->_inventory[i] != 0)
			i++;
		if (i > 3)
			std::cout << "Materia " << m->getType() << " could not be equiped, because inventory is full (4/4)." << std::endl;
		else
		{
			std::cout << "Materia " << m->getType() << " has been equiped." << std::endl;
			this->_inventory[i] = m;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		std::cout << "Can't unequip slot number " << idx + 1 << ", there are only 4 slots on my inventory." << std::endl;
	else if (this->_inventory[idx])
		delete this->_inventory[idx];
	else
		std::cout << "Slot number " << idx + 1 << " is already empty." << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		std::cout << "Can't use slot number " << idx + 1 << ", there are only 4 slots on my inventory." << std::endl;
	else if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "Slot number " << idx + 1 << " is empty." << std::endl;
}