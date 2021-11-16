/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:12:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 04:05:50 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_CHARACTER_HPP_
#define EX03_CHARACTER_HPP_

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
 public:
    Character();
    explicit Character(std::string const& name);
    virtual ~Character();
    Character(Character const& src);

    Character& operator=(Character const& rhs);

    std::string const& getName() const;
    AMateria* getMateria(int idx) const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

 private:
    static const int MAX_NUM_MATERIA_ = 4;
    AMateria* materia_[4];
    std::string name_;

    void deleteMateria(AMateria* m);
};
#endif  // EX03_CHARACTER_HPP_
