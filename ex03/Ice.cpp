/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:40:12 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 15:40:12 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : _type("ice")
{

}

Ice::Ice(const Ice& other) : AMateria(other), _type(other._type)
{

}

Ice& Ice::operator=(const Ice& other)
{
	this->_type = other._type;
	return *this;
}

Ice::~Ice()
{

}

const std::string&	Ice::getType() const
{
	return this->_type;
}

Ice*	Ice::clone() const
{
	Ice	*c = new Ice;
	return c;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}