/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:35:57 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 14:35:57 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
			Cat();
			Cat(std::string type);
			Cat(const Cat& other);
			Cat& operator=(const Cat& other);
			~Cat();
			void		makeSound() const;
			void		setNewIdea(std::string idea) const;
			void		printIdeas() const;
	private:
			Brain	*Brain_;
};

#endif