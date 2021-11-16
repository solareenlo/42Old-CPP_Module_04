/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:16:26 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 23:56:56 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_CAT_HPP_
#define EX02_CAT_HPP_

#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 public:
    Cat();
    explicit Cat(std::string type);
    virtual ~Cat();
    Cat(Cat const& src);

    Cat& operator=(Cat const& rhs);

    void makeSound() const;
    Brain* getBrain() const;
    void setBrain(Brain* brain);

 private:
    Brain* brain_;
};

#endif  // EX02_CAT_HPP_
