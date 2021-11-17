/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:05:21 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 11:18:24 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_CURE_HPP_
#define EX03_CURE_HPP_

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
 public:
    Cure();
    virtual ~Cure();
    Cure(Cure const& src);

    Cure& operator=(Cure const& rhs);

    virtual AMateria* clone() const;
    virtual void use(ICharacter const& target);
};

#endif  // EX03_CURE_HPP_
