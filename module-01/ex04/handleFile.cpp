/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleFile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:24:17 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/29 14:24:29 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//open files
int	handleFile(char **av, std::ifstream& srcFile, std::ofstream& desFile)
{
	srcFile.open(av[1]);
	if (!srcFile.is_open())
	{
		std::cerr << "Failed to open the src file" << std::endl;
		return (EXIT_FAILURE);
	}
	desFile.open("newFile.replace");
	if (!desFile.is_open())
	{
		std::cerr << "Failed to open the des file" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}