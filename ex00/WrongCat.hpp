/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:28:50 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:32:55 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(WrongCat const& src);

    WrongCat& operator=(WrongCat const& rhs);

    void makeSound() const;
};
#endif  // WRONGCAT_HPP_
