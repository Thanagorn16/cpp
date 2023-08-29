/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rep.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:24:53 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/29 14:25:15 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//copy and replace
void	rep(char **av, std::ifstream& srcFile, std::ofstream& desFile)
{
	std::string		line;
	size_t			pos;

	while (std::getline(srcFile, line))
	{
		pos = line.find(av[2]);
		while (pos != std::string::npos)
		{
			std::string	before = line.substr(0, pos);
			std::string	after = line.substr(pos + strlen(av[2]));
			std::string res = before + av[3] + after;
			line = res;
			pos = line.find(av[2]);
		}
		desFile << line << std::endl;
	}
}