/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:01:55 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 11:04:41 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA 
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();

	private:
		std::string _name;
		Weapon &_weapon;
};

#endif