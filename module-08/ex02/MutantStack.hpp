/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:40:01 by prachman          #+#    #+#             */
/*   Updated: 2023/10/21 10:37:43 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack& obj);
		MutantStack& operator=(const MutantStack& obj);
		~MutantStack(void);

		typedef typename	std::stack<T>::container_type::iterator	iterator;
		iterator	begin() {return this->c.begin();}
		iterator	end() {return this->c.end();}
};

template <typename Container>
void	printStack(Container& c);

#include "MutantStack.tpp"

#endif