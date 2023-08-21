#include <iostream>
#include "oop.hpp"

class Human
{
	public:
		std::string name;
		std::string job;
		int age;
	
	void	eat()
	{
		std::cout << "this person is eating\n";
	}
	void	drink()
	{
		std::cout << "this person is drinking\n";
	}
	void	sleep()
	{
		std::cout << "this person is sleeping\n";
	}
};

Sample::Sample(void) // this one is a constructer
{
	std::cout << "this is a sample" << '\n';
	return;
}

Dog::Dog()
{
	//innitialize the name
	name = "Doggy";
}

//using getter and setter
int	main()
{
	Dog	dog1;

	std::cout << dog1.getName() << std::endl;
	dog1.setName("Doog");
	std::cout << dog1.getName() << std::endl;
}


// int main(int ac, char **av)
// {
// 	Human	human1;
// 	Human	human2;
// 	Car		car1("japan", "XYZ", 1008, "red");
// 	Sample	instance;

// 	human1.name = "Rick";
// 	human1.job = "teacher";
// 	human1.age = 23;

// 	std::cout << human1.name << '\n';
// 	std::cout << human1.job << '\n';
// 	std::cout << human1.age << '\n';

// 	human1.eat();
// 	human1.drink();
// 	human1.sleep();

// 	human2.name = "James";
// 	human2.job = "doctor";
// 	human2.age = 33;

// 	std::cout << human2.name << '\n';
// 	std::cout << human2.job << '\n';
// 	std::cout << human2.age << '\n';

// 	std::cout << car1.make << '\n';
// 	std::cout << car1.model << '\n';
// 	std::cout << car1.year << '\n';
// 	std::cout << car1.color << '\n';

// }