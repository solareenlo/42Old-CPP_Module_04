/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:32:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 03:46:05 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : materia_(), name_("Character") {
    std::cout << this->name_ << ": constructor!" << std::endl;
}

Character::Character(std::string const& name) : materia_(), name_(name) {
    std::cout << this->name_ << ": constructor!" << std::endl;
}

Character::~Character() {
    std::cout << this->name_ << ": destructor!!" << std::endl;
    for (int i = 0; i < Character::MAX_NUM_MATERIA_; i++) {
        this->deleteMateria(this->materia_[i]);
    }
}

Character::Character(Character const& src) : name_(src.getName()) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getName() << "." << std::endl;
    for (int i = 0; i < Character::MAX_NUM_MATERIA_; i++) {
        if (src.getMateria(i) != NULL) {
            this->materia_[i] = src.getMateria(i)->clone();
        }
    }
}

Character& Character::operator=(Character const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator!! ";
        std::cout << "Copying from " << rhs.getName() << " to "
                  << this->getName() << "." << std::endl;
        for (int i = 0; i < Character::MAX_NUM_MATERIA_; i++) {
            this->deleteMateria(this->materia_[i]);
            this->materia_[i] = NULL;
            if (rhs.getMateria(i) != NULL) {
                this->materia_[i] = rhs.getMateria(i)->clone();
            }
        }
    }
    return *this;
}

std::string const& Character::getName() const { return this->name_; }

AMateria* Character::getMateria(int idx) const {
    if (0 <= idx && idx < Character::MAX_NUM_MATERIA_) {
        return this->materia_[idx];
    }
    return NULL;
}

void Character::equip(AMateria* m) {
    if (m == NULL) {
        return;
    }
    for (int i = 0; i < Character::MAX_NUM_MATERIA_; i++) {
        if (this->getMateria(i) == NULL) {
            this->materia_[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (this->getMateria(idx)) {
        this->materia_[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (this->getMateria(idx)) {
        this->getMateria(idx)->use(target);
    }
}

void Character::deleteMateria(AMateria* m) {
    if (m != NULL) {
        delete m;
    }
}
