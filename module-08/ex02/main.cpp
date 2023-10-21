/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:33:09 by prachman          #+#    #+#             */
/*   Updated: 2023/10/21 11:01:59 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


int main() {
	{
		std::cout << "test: stack's member funcitons and iteration" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl; //print 17
		mstack.pop();
		std::cout << mstack.size() << std::endl; //print 1
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		// [...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << s.top() << std::endl; //print 0
	}
	{
		std::cout << "test: list" << std::endl;
		std::list<int>	lst;
		
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);
		printStack(lst);
	}
}
