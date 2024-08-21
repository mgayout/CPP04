/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:55:13 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/20 11:55:13 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	public:
			AAnimal();
			AAnimal(std::string type);
			AAnimal(const AAnimal& other);
			AAnimal& operator=(const AAnimal& other);
			virtual ~AAnimal();
			std::string		getType() const;
			virtual void	makeSound() const = 0;

	protected:
			std::string	type;

};

#endif