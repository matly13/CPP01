/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:17:42 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 11:22:04 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const &Weapon::getType(void)
{
	return this->type;
}

void Weapon::setType(std::string type){
	this->type = type;

	return;
}