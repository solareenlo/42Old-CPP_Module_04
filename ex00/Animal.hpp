/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:11:53 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:13:00 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {
 public:
    Animal();
    Animal(std::string type);
    virtual ~Animal();
    Animal(Animal const& src);

    Animal& operator=(Animal const& rhs);

    std::string getType() const;
    virtual void makeSound() const;

 protected:
    std::string type_;

    void setType(std::string type);
};

#endif  // ANIMAL_HPP_
