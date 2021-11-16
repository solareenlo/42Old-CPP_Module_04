/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:16:26 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:51:26 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_CAT_HPP_
#define EX00_CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal {
 public:
    Cat();
    virtual ~Cat();
    Cat(Cat const& src);

    Cat& operator=(Cat const& rhs);

    void makeSound() const;
};
#endif  // EX00_CAT_HPP_
