/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:41:36 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 10:06:47 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(7, "Arrivano gli Zombie");

	for (int i = 0; i < 7; ++i)
		zombies[i].announce();

	delete[] zombies;

	return 0;
}