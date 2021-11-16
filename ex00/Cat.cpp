/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:17:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:18:40 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << this->type_ << ": default constructor!!" << std::endl;
}

Cat::~Cat() { std::cout << this->type_ << ": destructor!!" << std::endl; }

Cat::Cat(Cat const& src) : Animal(src.getType()) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

Cat& Cat::operator=(Cat const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator!! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        Animal::operator=(rhs);
        this->setType(rhs.getType());
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->getType() << ": meow meow!" << std::endl;
}
