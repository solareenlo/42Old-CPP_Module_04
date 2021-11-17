/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:21:17 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 09:58:40 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_IMATERIASOURCE_HPP_
#define EX03_IMATERIASOURCE_HPP_

#include <string>

#include "AMateria.hpp"

class AMateria;

class IMateriaSource {
 public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif  // EX03_IMATERIASOURCE_HPP_
