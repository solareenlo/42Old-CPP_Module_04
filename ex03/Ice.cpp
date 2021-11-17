/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:26:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 11:18:39 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << this->getType() << ": constructor!!" << std::endl;
}

Ice::~Ice() { std::cout << this->type_ << ": destructor!!" << std::endl; }

Ice::Ice(Ice const& src) : AMateria(src.getType()) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

Ice& Ice::operator=(Ice const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator!! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        AMateria::operator=(rhs);
        this->setType(rhs.getType());
    }
    return *this;
}

AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter const& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"
              << std::endl;
}
