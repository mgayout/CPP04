/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:48:53 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 15:48:53 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
			const std::string	_name;
			AMateria*			_inventory[4];

	public:
			Character();
			Character(std::string name);
			Character(const Character& other);
			Character& operator=(const Character& other);
			~Character();
			const std::string&	getName() const;
			void				equip(AMateria* m);
			void				unequip(int idx);
			void				use(int idx, ICharacter& target);

};

#endif