/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:07:54 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 11:08:46 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	this->_name = name;
	std::cout << this->_name <<" joined the battlefield and grabbed a " << this->_weapon.getType() << " to fight." << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->_name << " died." << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their" << this->_weapon.getType() << "." << std::endl;
}