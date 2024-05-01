/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:33:54 by martina           #+#    #+#             */
/*   Updated: 2024/05/01 11:38:17 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Error: Cretino, hai sbagliato" << std::endl;
		return (1);
	}

	std::string filename(av[1]);
	std::string find(av[2]);
	std::string replace(av[3]);
	if (filename.empty() || find.empty() || replace.empty()) {
		std::cout << "Error: Non c'è niente qua" << std::endl;
		return (2);
	}

	std::ifstream infile(filename);
	std::string content;
	if (infile.is_open()) {
		content.assign((std::istreambuf_iterator<char>(infile)), (std::istreambuf_iterator<char>()));
	} else {
		std::cout << "Error: Non c'è, non c'è" << std::endl;
		return (3);
	}
	infile.close();

	std::ofstream outfile(filename.append(".replace"));
	if (outfile.is_open()) {
		size_t pos = 0;
		while (pos != std::string::npos) {
			pos = content.find(find, pos);
			if (pos != std::string::npos) {
				content.erase(pos, find.length());
				content.insert(pos, replace);
			} else {
				outfile << content;
			}
		}
	} else {
		std::cout << "Error: Entra? Non Entraaaaa" << std::endl;
		return (4);
	}
	outfile.close();

	return (0);
}