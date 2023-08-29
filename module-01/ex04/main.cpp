/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:51:44 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/29 14:26:06 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char** av)
{
	std::ifstream	srcFile;
	std::ofstream	desFile;

	if (ac != 4)
	{
		std::cerr << "Not enough argument(s)" << std::endl;
		return (EXIT_FAILURE);
	}

	//open files
	if (handleFile(av, srcFile, desFile))
		return (EXIT_FAILURE);

	//copy and replace
	rep(av, srcFile, desFile);

	//close files
	srcFile.close();
	desFile.close();
}