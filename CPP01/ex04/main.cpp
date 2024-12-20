/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:21:30 by root              #+#    #+#             */
/*   Updated: 2024/12/20 08:54:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (!Replace::processFile(filename, s1, s2))
		return (1);
	std::cout << "File processed successfully. Output written to " << filename << ".replace" << std::endl;
	return 0;
}
