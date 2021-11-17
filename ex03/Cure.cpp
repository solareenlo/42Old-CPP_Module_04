/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:06:50 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 11:18:13 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << this->getType() << ": constructor!!" << std::endl;
}

Cure::~Cure() { std::cout << this->type_ << ": destructor!!" << std::endl; }

Cure::Cure(Cure const& src) : AMateria(src.getType()) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

Cure& Cure::operator=(Cure const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator!! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        AMateria::operator=(rhs);
        this->setType(rhs.getType());
    }
    return *this;
}

AMateria* Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter const& target) {
    std::cout << "* heals " << target.getName() << "'s wounds * " << std::endl;
}
