/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:16:26 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:17:42 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal {
 public:
    Cat();
    virtual ~Cat();
    Cat(Cat const& src);

    Cat& operator=(Cat const& rhs);

    void makeSound() const;
};
#endif  // CAT_HPP_
