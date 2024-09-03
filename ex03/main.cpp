/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:12:47 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/28 15:12:47 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	return 0;
}

/*int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* notme = new Character("notme");
	Ice*	ice = new Ice();
	Cure*	cure = new Cure();
	AMateria* tmp;
	
	tmp = src->createMateria("");
	me->equip(tmp);

	tmp = src->createMateria("ice");
	me->equip(tmp);

	src->learnMateria(ice);
	src->learnMateria(cure);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *notme);
	me->use(1, *notme);
	me->use(2, *notme);
	me->use(3, *notme);
	me->use(4, *notme);

	delete notme;
	delete me;
	delete src;

	return 0;
}*/
