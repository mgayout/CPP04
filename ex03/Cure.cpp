/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:57:21 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 17:57:21 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : _type("cure")
{

}

Cure::Cure(const Cure& other) : AMateria(other), _type(other._type)
{

}

Cure& Cure::operator=(const Cure& other)
{
	this->_type = other._type;
	return *this;
}

Cure::~Cure()
{

}

const std::string&	Cure::getType() const
{
	return this->_type;
}

Cure*	Cure::clone() const
{
	Cure	*c = new Cure;
	return c;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
