/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:40:31 by prachman          #+#    #+#             */
/*   Updated: 2023/12/05 14:01:53 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MERGE_ME_HPP
#define P_MERGE_ME_HPP

#include <iostream>

struct	t_pair
{
	int	top, bot;
};

void	printErrorArg(char *val);
void	printPair(std::vector<t_pair> vecPair);
bool	strIsDigit(char *s);

#endif