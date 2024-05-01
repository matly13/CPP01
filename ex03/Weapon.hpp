/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:04:20 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 11:21:30 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon 
{
	public:
		Weapon(std::string type);
		~Weapon();
		void setType(std::string type);
		const std::string &getType();

	private:
		std::string type;
};

#endif