/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:05:28 by root              #+#    #+#             */
/*   Updated: 2024/12/19 21:13:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>

class Replace
{
public:
	static bool processFile(const std::string &filename, const std::string &s1, const std::string &s2);

private:
	static std::string replaceAll(const std::string &content, const std::string &s1, const std::string &s2);
};

#endif
