/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:31:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:31:27 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << this->type_ << ": default constructor!!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << this->type_ << ": destructor!!" << std::endl;
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal(src.getType()) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

WrongCat& WrongCat::operator=(WrongCat const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator!! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        WrongAnimal::operator=(rhs);
        this->setType(rhs.getType());
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << this->getType() << ": meow meow!" << std::endl;
}
