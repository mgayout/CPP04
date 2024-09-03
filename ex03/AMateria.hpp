/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:17:34 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 15:17:34 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "iostream"
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
			std::string	_type;

	public:
			AMateria();
			AMateria(const std::string& type);
			AMateria(const AMateria& other);
			AMateria& operator=(const AMateria& other);
			virtual ~AMateria();
			virtual const std::string& getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);

};

#endif