/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:19:00 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 19:19:00 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat();
			WrongCat(std::string type);
			WrongCat(const WrongCat& other);
			WrongCat& operator=(const WrongCat& other);
			~WrongCat();
			void		makeSound() const;
};

#endif