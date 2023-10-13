/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:18:54 by prachman          #+#    #+#             */
/*   Updated: 2023/10/13 12:00:27 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	printArr(T& value)
{
	std::cout << value << std::endl;
}

int	main()
{
	int			arrInt[] = {1, 2, 3, 4, 5};
	float		arrFloat[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double		arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char		arrChar[] = {'a', 'b', 'c', 'd', 'e'};
	std::string	arrStr[] = {"abc", "def", "ghi", "jkl", "mnop"};

	size_t	arrIntSize = sizeof(arrInt)/sizeof(arrInt[0]);
	size_t	arrFloatSize = sizeof(arrFloat)/sizeof(arrFloat[0]);
	size_t	arrDoubleSize = sizeof(arrDouble)/sizeof(arrDouble[0]);
	size_t	arrCharSize = sizeof(arrChar)/sizeof(arrChar[0]);
	size_t	arrStrSize = sizeof(arrStr)/sizeof(arrStr[0]);

	iter(arrInt, arrIntSize, printArr<int>);
	iter(arrFloat, arrFloatSize, printArr<float>);
	iter(arrDouble, arrDoubleSize, printArr<double>);
	iter(arrChar, arrCharSize, printArr<char>);
	iter(arrStr, arrStrSize, printArr<std::string>);
}

// class Awesome
// {
//   public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
//   private:
// 	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print(T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome	tab2[5];

//   iter(tab, 5, print<const int>);
//   iter(tab2, 5, print<Awesome>);

//   return 0;
// }