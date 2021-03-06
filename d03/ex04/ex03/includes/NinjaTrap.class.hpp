/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:27:50 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:01:53 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_CLASS_HPP
#define NINJA_CLASS_HPP

#include "ClapTrap.class.hpp"

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

#define NTCQ                                                                   \
  "NIIIIIII....IIIIIIIIIIIIIIII...IIIIIIIIIIIIIIIIIIIIII..."                   \
  "IIIIIIIIIIIIIIIIIIIIN\n\n\n\n\n\n\n\n\nJa"

#define NTDQ "ja"

class NinjaTrap : public ClapTrap {
public:
  NinjaTrap(std::string);
  NinjaTrap(NinjaTrap const &);
  NinjaTrap &operator=(NinjaTrap const &);
  ~NinjaTrap();

  void ninjaShoebox(ClapTrap const &);
  void ninjaShoebox(FragTrap const &);
  void ninjaShoebox(ScavTrap const &);
  void ninjaShoebox(NinjaTrap const &);
};
#endif // !NINJA_CLASS_HPP