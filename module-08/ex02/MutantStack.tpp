/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:12:08 by prachman          #+#    #+#             */
/*   Updated: 2023/11/20 11:13:50 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ****************************** Orthodox Canonical Form ****************************** //

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& obj) : std::stack<T>(obj) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& obj)
{
	if (this != &obj)
		std::stack<T>::operator=(obj);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

// ****************************** Other(s) ****************************** //

template <typename Container>
void    printStack(Container& c)
{
	for (typename Container::iterator it = c.begin(); it != c.end(); it++)
		std::cout << *it << std::endl;
}
