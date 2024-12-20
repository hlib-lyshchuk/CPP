/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:05:28 by root              #+#    #+#             */
/*   Updated: 2024/12/20 08:49:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <fstream>

class Replace
{
private:
	static std::string replaceAll(const std::string &content, const std::string &s1, const std::string &s2);

public:
	static bool processFile(const std::string &filename, const std::string &s1, const std::string &s2);
};
