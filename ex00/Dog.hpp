/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:32:26 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:51:33 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_DOG_HPP_
#define EX00_DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal {
 public:
    Dog();
    virtual ~Dog();
    Dog(Dog const& src);

    Dog& operator=(Dog const& rhs);

    void makeSound() const;
};
#endif  // EX00_DOG_HPP_
