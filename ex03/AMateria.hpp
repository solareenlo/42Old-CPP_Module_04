/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:13:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 04:06:41 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_AMATERIA_HPP_
#define EX03_AMATERIA_HPP_

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria {
 public:
    AMateria();
    explicit AMateria(std::string const& type);
    virtual ~AMateria();
    AMateria(AMateria const& src);

    AMateria& operator=(AMateria const& rhs);

    std::string const& getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

 protected:
    std::string type_;

    void setType(std::string const& type);
};

#endif  // EX03_AMATERIA_HPP_
