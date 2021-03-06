/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:15:43 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 11:04:19 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
  std::cout << this->_name << " attack with his " << this->_weapon.getType()
            << std::endl;
}