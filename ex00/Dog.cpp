/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:34:21 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:14:54 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << this->type_ << ": default constructor!!" << std::endl;
}

Dog::~Dog() { std::cout << this->type_ << ": destructor!!" << std::endl; }

Dog::Dog(Dog const& src) : Animal(src.getType()) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

Dog& Dog::operator=(Dog const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator!! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        Animal::operator=(rhs);
        this->setType(rhs.getType());
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->getType() << ": Wan Wan!" << std::endl;
}
