/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:34:21 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 20:30:09 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain_(new Brain("Dog")) {
    std::cout << this->type_ << ": default constructor!!" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), brain_(new Brain(type)) {
    std::cout << this->type_ << ": default constructor!!" << std::endl;
}

Dog::~Dog() {
    std::cout << this->type_ << ": destructor!!" << std::endl;
    delete this->brain_;
}

Dog::Dog(Dog const& src)
    : Animal(src.getType()), brain_(new Brain(src.getType())) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
    this->setBrain(src.getBrain());
}

Dog& Dog::operator=(Dog const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator!! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        Animal::operator=(rhs);
        this->setType(rhs.getType());
        this->setBrain(rhs.getBrain());
    }
    return *this;
}

Brain* Dog::getBrain() const { return this->brain_; }

void Dog::makeSound() const {
    std::cout << this->getType() << ": Wan Wan!" << std::endl;
}

void Dog::setBrain(Brain* brain) {
    if (brain == NULL) {
        return;
    }
    delete this->brain_;
    this->brain_ = new Brain(this->getType());
    *(this->brain_) = (*brain);
}
