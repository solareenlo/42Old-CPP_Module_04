/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 02:42:59 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 03:38:36 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materia_() {
    std::cout << "MateriaSource: constructor!" << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource: destructor!" << std::endl;
    for (int i = 0; i < MateriaSource::MAX_NUM_MATERIA_; i++) {
        this->deleteMateria(this->materia_[i]);
    }
}

MateriaSource::MateriaSource(MateriaSource const& src) : materia_() {
    std::cout << "Copy constructor!! " << std::endl;
    for (int i = 0; i < MateriaSource::MAX_NUM_MATERIA_; i++) {
        if (src.getMateria(i) != NULL) {
            this->materia_[i] = src.getMateria(i)->clone();
        }
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator! " << std::endl;
        for (int i = 0; i < MateriaSource::MAX_NUM_MATERIA_; i++) {
            this->deleteMateria(this->materia_[i]);
            this->materia_[i] = NULL;
            if (rhs.getMateria(i) != NULL) {
                this->materia_[i] = rhs.getMateria(i)->clone();
            }
        }
    }
    return *this;
}

AMateria* MateriaSource::getMateria(int idx) const {
    if (0 <= idx && idx < MateriaSource::MAX_NUM_MATERIA_) {
        return this->materia_[idx];
    }
    return NULL;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (m == NULL) {
        return;
    }
    for (int i = 0; i < MAX_NUM_MATERIA_; i++) {
        if (this->getMateria(i) == NULL) {
            this->materia_[i] = m;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < MateriaSource::MAX_NUM_MATERIA_; i++) {
        if (this->getMateria(i) != NULL &&
            type == this->getMateria(i)->getType()) {
            return this->getMateria(i)->clone();
        }
    }
    return NULL;
}

void MateriaSource::deleteMateria(AMateria* m) {
    if (m != NULL) {
        delete m;
    }
}
