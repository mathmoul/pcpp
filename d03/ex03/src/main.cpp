/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:31:49 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:01:55 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <time.h> /* time */

int main() {
  srand(time(NULL));
  NinjaTrap a("KKK");
  NinjaTrap b("Z");
  ClapTrap q("init");
  FragTrap w("Flagzzzz");

  b = a;
  b.ninjaShoebox(a);
  b.ninjaShoebox(q);
  b.ninjaShoebox(w);
}