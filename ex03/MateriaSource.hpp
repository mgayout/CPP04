/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:03:02 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 16:03:02 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
			AMateria*	_inventory[4];

	public:
			MateriaSource();
			MateriaSource(const MateriaSource& other);
			MateriaSource& operator=(const MateriaSource& other);
			~MateriaSource();
			void		learnMateria(AMateria* m);
			AMateria*	createMateria(const std::string& type);
};

#endif