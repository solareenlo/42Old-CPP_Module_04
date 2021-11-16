/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:30:10 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/16 20:50:58 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_BRAIN_HPP_
#define EX02_BRAIN_HPP_

#include <iostream>
#include <string>

class Brain {
 public:
    Brain();
    explicit Brain(std::string idea);
    virtual ~Brain();
    Brain(Brain const& src);

    Brain& operator=(Brain const& rhs);

    std::string* getIdeas() const;

 private:
    std::string* ideas_;

    static const int INIT_NUMBER_IDEAS_ = 100;
};

#endif  // EX02_BRAIN_HPP_
