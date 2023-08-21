#include <iostream>

#ifndef OOP_HPP
#define OOP_HPP

class Sample
{
    public:
        Sample(void);
};

class Dog
{
    private:
        std::string name;
    public:
        void setName(const std::string newName)
        {
            name = newName;
        }
        const std::string getName() const
        {
            return name;
        }
        Dog(void);
};

class Car
{
	public:
		std::string make;
		std::string model;
		int	year;
		std::string color;
    
    //constructor doesn note have to be in header files
    Car(std::string make, std::string model, int year, std::string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }

    //method
	void	acc()
	{
		std::cout << "accerelate\n";
	}
	void	brake()
	{
		std::cout << "brake!!\n";
	}
};

#endif