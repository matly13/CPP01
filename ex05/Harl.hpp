/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:53:40 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 12:02:49 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
	Harl(void);
	~Harl(void);

	void complain(std::string level);

private:
	static const std::string mood[];

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif