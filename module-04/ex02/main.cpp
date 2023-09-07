/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:18:12 by prachman          #+#    #+#             */
/*   Updated: 2023/09/07 13:39:44 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* cat = new Cat();
	Animal* dog = new Dog();

	delete cat;
	delete dog;

    std::cout << "////////////////////////////////////////" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
    std::cout << "////////////////////////////////////////" << std::endl;
	int n = 4;
	Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for (int i = 0; i < n; i++) {
		std::cout << animals[i]->getType() << " : ";
		animals[i]->makeSound();
		delete animals[i];
	}

	// can't instantiate due to being an abstract class
	// Animal	ani;

	return 0;
}