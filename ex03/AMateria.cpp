/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:22:20 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 15:22:20 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{

}

AMateria::AMateria(const std::string& type) : _type(type)
{

}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{

}

AMateria& AMateria::operator=(const AMateria &other)
{
	this->_type = other._type;
	return *this;
}

AMateria::~AMateria()
{

}

const std::string& AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}