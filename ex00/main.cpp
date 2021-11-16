/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:10:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:41:08 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "< Constructor >" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong_animal = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << std::endl;

    std::cout << "< Type >" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wrong_animal->getType() << std::endl;
    std::cout << wrong_cat->getType() << std::endl;
    std::cout << std::endl;

    std::cout << "< makeSournd() >" << std::endl;
    i->makeSound();  // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    std::cout << "< Wrong sournd() >" << std::endl;
    wrong_animal->makeSound();
    wrong_cat->makeSound();
    std::cout << std::endl;

    std::cout << "< Destructor >" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrong_animal;
    delete wrong_cat;
    return 0;
}
