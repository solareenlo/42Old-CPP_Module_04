/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:26:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:46:54 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
    std::cout << this->type_ << ": default constructor!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type_(type) {
    std::cout << this->type_ << ": constructor with arg!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << this->type_ << ": destructor!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {
    std::cout << "Copy constructor! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        this->setType(rhs.getType());
    }
    return *this;
}

std::string WrongAnimal::getType() const { return this->type_; }
void WrongAnimal::setType(std::string type) { this->type_ = type; }

void WrongAnimal::makeSound() const {
    std::cout << this->getType() << ": WrongAnimal!" << std::endl;
}
