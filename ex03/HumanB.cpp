/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:09:49 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 11:15:04 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack()
{
	this->weapon =weapon;

	return;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their ";

	if (this->weapon != NULL)
		std::cout << this->weapon->getType();
	else
		std::cout << "bare hands";

	std::cout << std::endl;

	return;
}