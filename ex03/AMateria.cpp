/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:28:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 00:56:48 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type_("AMateria") {
    std::cout << this->type_ << ": constructor!" << std::endl;
}

AMateria::AMateria(std::string const& type) : type_(type) {
    std::cout << this->type_ << ": constructor with arg!" << std::endl;
}

AMateria::~AMateria() {
    std::cout << this->type_ << ": destructor!" << std::endl;
}

AMateria::AMateria(AMateria const& src) {
    std::cout << "Copy constructor! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

AMateria& AMateria::operator=(AMateria const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        this->setType(rhs.getType());
    }
    return *this;
}

std::string const& AMateria::getType() const { return this->type_; }
void AMateria::setType(std::string const& type) { this->type_ = type; }

void AMateria::use(ICharacter& target) {
    if (target.getName() == "Ice") {
        std::cout << "* shoots an ice bolt at " << target.getName() << " *"
                  << std::endl;
    } else if (target.getName() == "Cure") {
        std::cout << "* heals " << target.getName() << "’s wounds * "
                  << std::endl;
    } else {
        std::cout << "* *** *" << std::endl;
    }
}
