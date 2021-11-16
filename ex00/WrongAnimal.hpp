/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:23:17 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 15:11:16 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_WRONGANIMAL_HPP_
#define EX00_WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
 public:
    WrongAnimal();
    explicit WrongAnimal(std::string type);
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const& src);

    WrongAnimal& operator=(WrongAnimal const& rhs);

    std::string getType() const;
    void makeSound() const;

 protected:
    std::string type_;

    void setType(std::string type);
};
#endif  // EX00_WRONGANIMAL_HPP_
