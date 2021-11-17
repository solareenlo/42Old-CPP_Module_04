/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:24:58 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/17 10:53:50 by tayamamo         ###   ########.fr       */
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

    AMateria* getMateria(int idx) const;
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const& type);

 private:
    static const int MAX_NUM_MATERIA_ = 4;
    AMateria* materia_[4];

    void deleteMateria(AMateria* m);
    bool haveMateria(AMateria* m);
};

#endif  // EX03_MATERIASOURCE_HPP_
