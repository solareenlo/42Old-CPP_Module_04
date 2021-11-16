/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:17:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 20:29:39 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain_(new Brain("Cat")) {
    std::cout << this->type_ << ": default constructor!!" << std::endl;
}

Cat::Cat(std::string type) : Animal(type), brain_(new Brain(type)) {
    std::cout << this->type_ << ": default constructor!!" << std::endl;
}

Cat::~Cat() {
    std::cout << this->type_ << ": destructor!!" << std::endl;
    delete this->brain_;
}

Cat::Cat(Cat const& src)
    : Animal(src.getType()), brain_(new Brain(src.getType())) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
    this->setBrain(src.getBrain());
}

Cat& Cat::operator=(Cat const& rhs) {
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

Brain* Cat::getBrain() const { return this->brain_; }

void Cat::makeSound() const {
    std::cout << this->getType() << ": meow meow!" << std::endl;
}

void Cat::setBrain(Brain* brain) {
    if (brain == NULL) {
        return;
    }
    delete this->brain_;
    this->brain_ = new Brain(this->getType());
    *(this->brain_) = (*brain);
}
