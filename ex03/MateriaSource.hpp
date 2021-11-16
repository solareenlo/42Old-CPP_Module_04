/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:24:58 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 01:29:06 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_MATERIASOURCE_HPP_
#define EX03_MATERIASOURCE_HPP_

#include <string>

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(MateriaSource const& src);

    MateriaSource& operator=(MateriaSource const& rhs);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const& type);
};

#endif  // EX03_MATERIASOURCE_HPP_
