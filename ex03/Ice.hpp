/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:24:26 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 11:18:33 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_ICE_HPP_
#define EX03_ICE_HPP_

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
 public:
    Ice();
    virtual ~Ice();
    Ice(Ice const& src);

    Ice& operator=(Ice const& rhs);

    virtual AMateria* clone() const;
    virtual void use(ICharacter const& target);
};

#endif  // EX03_ICE_HPP_
