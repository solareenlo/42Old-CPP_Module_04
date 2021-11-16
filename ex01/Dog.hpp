/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:32:26 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 20:31:37 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_DOG_HPP_
#define EX01_DOG_HPP_

#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 public:
    Dog();
    explicit Dog(std::string type);
    virtual ~Dog();
    Dog(Dog const& src);

    Dog& operator=(Dog const& rhs);

    void makeSound() const;
    Brain* getBrain() const;
    void setBrain(Brain* brain);

 private:
    Brain* brain_;
};

#endif  // EX01_DOG_HPP_
