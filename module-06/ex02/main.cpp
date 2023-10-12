/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:29:58 by prachman          #+#    #+#             */
/*   Updated: 2023/10/12 12:25:09 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*   generate()
{
	std::srand(std::time(0));
	
	int randomValue = std::rand() % 3;
	switch (randomValue)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "object pointed to by p: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "object pointed to by p: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "object pointed to by p: C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "object pointed to by p: A" << std::endl;
	}
	catch (std::bad_cast& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "object pointed to by p: B" << std::endl;
		}
		catch (std::bad_cast& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "object pointed to by p: C" << std::endl;
			}
			catch (std::bad_cast& e)
			{
				std::cout << "Object referred to by ref is not of type A, B, or C" << std::endl;
			}
		}
	}
}

int	main()
{
	Base*	obj;
	
	obj = generate();
	identify(*obj);
	identify(obj);
	delete obj;
}