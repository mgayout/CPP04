/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:57:12 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 17:57:12 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
			std::string	_type;

	public:
			Cure();
			Cure(const Cure& other);
			Cure& operator=(const Cure& other);
			~Cure();
			const std::string&	getType() const;
			Cure*				clone() const;
			void				use(ICharacter& target);

};

#endif