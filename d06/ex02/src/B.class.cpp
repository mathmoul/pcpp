/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.class.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:48:07 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 18:48:18 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.class.hpp"

B::B() {}
B::B(B const &cpy) { *this = cpy; }
B &B::operator=(B const &cpy) {
  if (this != &cpy) {
  }
  return *this;
}
B::~B(void) {}