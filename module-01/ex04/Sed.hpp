/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:52:43 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/29 14:25:45 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>

int		handleFile(char **av, std::ifstream& srcFile, std::ofstream& desFile);
void	rep(char **av, std::ifstream& srcFile, std::ofstream& desFile);

#endif