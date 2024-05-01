/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:00:07 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 12:00:15 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Karen annoying = Karen();
	annoying.complain("DEBUG");
	annoying.complain("INFO");
	annoying.complain("WARNING");
	annoying.complain("ERROR");
	annoying.complain("blabla");
	annoying.complain("bloop");
	annoying.complain("meep");
	annoying.complain("mrrrp");
}