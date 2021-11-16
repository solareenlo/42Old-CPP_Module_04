/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:23:17 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 14:36:14 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
 public:
    WrongAnimal();
    WrongAnimal(std::string type);
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const& src);

    WrongAnimal& operator=(WrongAnimal const& rhs);

    std::string getType() const;
    void makeSound() const;

 protected:
    std::string type_;

    void setType(std::string type);
};
#endif  // WRONGANIMAL_HPP_
