/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:18:41 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 19:18:41 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
			WrongAnimal();
			WrongAnimal(std::string type);
			WrongAnimal(const WrongAnimal& other);
			WrongAnimal& operator=(const WrongAnimal& other);
			virtual ~WrongAnimal();
			std::string		getType() const;
			virtual void	makeSound() const;

	protected:
			std::string	type;
};

#endif