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


int	main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();

	std::cout << "meta type : " <<  meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << "i type : " << i->getType() << std::endl;
	i->makeSound();
	delete i;
	std::cout << "j type : " << j->getType() << std::endl;
	j->makeSound();
	delete j;
	std::cout << "k type : " << k->getType() << std::endl;
	k->makeSound();
	delete k;
	std::cout << "l type : " << l->getType() << std::endl;
	l->makeSound();
	delete l;
	return 0;
}
