/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:26:52 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 15:26:52 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
			std::string	_type;

	public:
			Ice();
			Ice(const Ice& other);
			Ice& operator=(const Ice& other);
			~Ice();
			const std::string&	getType() const;
			Ice*				clone() const;
			void				use(ICharacter& target);
};

#endif