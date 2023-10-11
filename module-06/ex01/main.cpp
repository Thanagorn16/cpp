/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:15:28 by prachman          #+#    #+#             */
/*   Updated: 2023/10/11 14:33:17 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data		myData;
	Data		*deData;	
	uintptr_t	serData;
	
	myData.name = "myData";
	myData.value = 1;

	serData = Serializer::serialize(&myData);
    std::cout << "Pointer value as uintptr_t: " << serData << std::endl;

	deData = Serializer::deserialize(serData);
    std::cout << "Pointer value after conversion (name): " << deData->name << std::endl;
    std::cout << "Pointer value after conversion (value): " << deData->value << std::endl;
	
	if (deData == &myData)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}
