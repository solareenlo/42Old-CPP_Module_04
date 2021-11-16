/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:14:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:15:12 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Animal") {
    std::cout << this->type_ << ": default constructor!" << std::endl;
}

Animal::Animal(std::string type) : type_(type) {
    std::cout << this->type_ << ": constructor with arg!" << std::endl;
}

Animal::~Animal() { std::cout << this->type_ << ": destructor!" << std::endl; }

Animal::Animal(Animal const& src) {
    std::cout << "Copy constructor! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

Animal& Animal::operator=(Animal const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        this->setType(rhs.getType());
    }
    return *this;
}

std::string Animal::getType() const { return this->type_; }
void Animal::setType(std::string type) { this->type_ = type; }

void Animal::makeSound() const {
    std::cout << this->getType() << ": Animal!" << std::endl;
}
