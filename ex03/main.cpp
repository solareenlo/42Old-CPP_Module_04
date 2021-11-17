/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 03:30:41 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 11:16:47 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
    std::cout << "< Constructor of MateriaSource>" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    std::cout << std::endl;

    std::cout << "< Constructor of me>" << std::endl;
    ICharacter* me = new Character("me");
    std::cout << std::endl;

    std::cout << "< Create materia >" << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("fire");
    me->equip(tmp);
    std::cout << std::endl;

    std::cout << "< Use materia >" << std::endl;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(100, *bob);
    std::cout << std::endl;

    std::cout << "< Destructor >" << std::endl;
    delete bob;
    delete me;
    delete src;

    return 0;
}
