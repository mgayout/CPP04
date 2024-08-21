/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:35:27 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 14:35:27 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


/*int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	return 0;
}*/

/*int main()
{
	Animal	*array[10];

	for (int i = 0; i != 10; i++)
	{
		if (i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for (int i = 0; i != 10; i++)
		array[i]->makeSound();
	for (int i = 0; i != 10; i++)
		delete array[i];
	return 0;
}*/

int	main()
{
	Cat	*array1[2];
	Dog	*array2[2];

	array1[0] = new Cat();
	array2[0] = new Dog();
	array1[0]->setNewIdea("Eating");
	array2[0]->setNewIdea("Playing");
	array1[1] = new Cat(*array1[0]);
	array2[1] = new Dog(*array2[0]);
	array1[0]->printIdeas();
	array1[1]->printIdeas();
	array2[0]->printIdeas();
	array2[1]->printIdeas();
	delete	array1[0];
	delete	array1[1];
	delete	array2[0];
	delete	array2[1];
	return 0;
}
