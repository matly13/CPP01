/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:57:16 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 11:01:29 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void) {
	Weapon knoife("sharp");
	HumanA snobble("Bob", knoife);
	snobble.attack();

	Weapon *empty = NULL;
	HumanB gobble("Jim");
	gobble.setWeapon(empty);
	gobble.attack();

	Weapon bat("big");
	empty = &bat;
	gobble.setWeapon(empty);
	gobble.attack();
}