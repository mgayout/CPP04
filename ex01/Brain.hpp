/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:37:08 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/20 09:37:08 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
			Brain();
			Brain(const Brain& other);
			Brain& operator=(Brain other);
			~Brain();
			void		setIdea(int n, const std::string idea);
			std::string	getIdea(int n);
	private:
			std::string	*ideas;
};

#endif