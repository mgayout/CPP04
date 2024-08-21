/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:36:04 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 14:36:04 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
			Dog();
			Dog(std::string type);
			Dog(const Dog& other);
			Dog& operator=(const Dog& other);
			~Dog();
			void		makeSound() const;
			void		setNewIdea(std::string idea) const;
			void		printIdeas() const;
	private:
			Brain	*Brain_;
};

#endif