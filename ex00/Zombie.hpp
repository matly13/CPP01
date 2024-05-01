/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:16:15 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 09:30:34 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>


class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);

	private:
		std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif