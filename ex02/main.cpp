/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:10:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 23:49:50 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    std::cout << "<< Simple test >>" << std::endl;
    {
        std::cout << "< Constructor >" << std::endl;
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << std::endl;

        std::cout << "< Destructor >" << std::endl;
        delete j;  // should not create a leak
        delete i;
    }
    std::cout << std::endl;

    std::cout << "<< Array test >>" << std::endl;
    {
        const int N = 4;
        Animal* A[N];

        std::cout << "< Constructor >" << std::endl;
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                A[i] = new Cat;
            } else {
                A[i] = new Dog;
            }
        }
        std::cout << std::endl;

        std::cout << "< Destructor >" << std::endl;
        for (int i = 0; i < N; i++) {
            delete A[i];
        }
    }
    std::cout << std::endl;

    std::cout << "<< Deep copy test >>" << std::endl;
    {
        std::cout << "< Constructor >" << std::endl;
        Cat C;
        std::cout << std::endl;

        std::cout << "< Cat ideas >" << std::endl;
        Brain* brain = C.getBrain();
        std::string* ideas = brain->getIdeas();
        for (int i = 0; i < 100; i++) {
            std::cout << std::setw(2) << i << ": " << ideas[i] << " ";
            if ((i + 1) % 10 == 0) {
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;

        std::cout << "< Dog ideas >" << std::endl;
        Dog D;
        Dog D2("D2");
        Brain* B = new Brain("B");
        std::cout << std::endl;

        D2.setBrain(B);
        std::cout << std::endl;

        D = D2;
        std::cout << std::endl;

        delete B;
        std::cout << std::endl;

        std::string* ideas_dog = D.getBrain()->getIdeas();
        for (int i = 0; i < 100; i++) {
            std::cout << std::setw(2) << i << ": " << ideas_dog[i] << " ";
            if ((i + 1) % 10 == 0) {
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
