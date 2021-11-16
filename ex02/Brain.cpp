/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:45:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 18:39:51 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : ideas_(new std::string[INIT_NUMBER_IDEAS_]) {
    std::cout << "Brain: constructor!" << std::endl;
    for (int i = 0; i < INIT_NUMBER_IDEAS_; i++) {
        this->ideas_[i] = "Brain";
    }
}

Brain::Brain(std::string idea) : ideas_(new std::string[INIT_NUMBER_IDEAS_]) {
    std::cout << "Brain: constructor!" << std::endl;
    for (int i = 0; i < INIT_NUMBER_IDEAS_; i++) {
        this->ideas_[i] = idea;
    }
}

Brain::~Brain() {
    std::cout << "Brain: destructor!" << std::endl;
    delete[] this->ideas_;
}

Brain::Brain(Brain const& src) : ideas_(new std::string[INIT_NUMBER_IDEAS_]) {
    if (this->ideas_ != NULL && src.ideas_ != NULL) {
        std::cout << "Brain: copy constructor!" << std::endl;
        for (int i = 0; i < Brain::INIT_NUMBER_IDEAS_; i++) {
            if (&(this->ideas_[i]) != NULL && &(src.ideas_[i]) != NULL) {
                this->ideas_[i] = src.ideas_[i];
            }
        }
    }
}

Brain& Brain::operator=(Brain const& rhs) {
    if (this != &rhs && this->ideas_ != NULL && rhs.ideas_ != NULL) {
        std::cout << "Brain: assignment operator!" << std::endl;
        for (int i = 0; i < Brain::INIT_NUMBER_IDEAS_; i++) {
            if (&(this->ideas_[i]) != NULL && &(rhs.ideas_[i]) != NULL) {
                this->ideas_[i] = rhs.ideas_[i];
            }
        }
    }
    return *this;
}

std::string* Brain::getIdeas() const { return this->ideas_; }
