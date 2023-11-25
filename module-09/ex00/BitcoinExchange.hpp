/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:21:39 by truangsi          #+#    #+#             */
/*   Updated: 2023/11/25 13:40:18 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_EX_HPP
#define BTC_EX_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <map>

struct  InputData
{
    std::string inputDate;
    float       inputValue;
    bool        isValue;
};


#endif