#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>


template <typename T>
T summ(T num1, T num2 = 0, T num3 = 0, T num4 = 0, T num5 = 0) {
	return num1 + num2 + num3 + num4 + num5;
}


inline double armean(double num1, double num2, double num3) {
	return (double)(num1 + num2 + num3) / 3;
}




int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // ��������� ������� �������� �� ���� ������
	srand(time(NULL));

	// Exercise 1.
	/*
		Create a function that takes from 1st to
	5 (inclusive) different numbers, then
	returns their sum.
	The default parameters must be used for the solution. Note that
	there must be one mandatory parameter in the function.
	*/
	std::cout << "Exercise 1.\nA program for calculating the sum of numbers.\nEnter the number of numbers: ";
	int amount, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
	std::cin >> amount;
	for (int i = 1; i <= amount; ++i) {
		std::cout << "Enter " << i << " number -> ";
		if (i == 1)
			std::cin >> n1;
		else if (i == 2)
			std::cin >> n2;
		else if (i == 3)
			std::cin >> n3;
		else if (i == 4)
			std::cin >> n4;
		else
			std::cin >> n5;
	}
	
	std::cout << "The sum of the entered numbers is equal to " << summ(n1, n2, n3, n4, n5) << std::endl;


	// Exercise 2.
	/*
		Create an embedded function that
	takes three numbers and returns their
	arithmetic mean.
	*/
	std::cout << "Exercise 2.\nCalculation of the arithmetic mean of three numbers.\nEnter three numbers -> ";
	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "The arithmetic mean is equal to " << armean(a, b, c) << ".\n";


	// Exercise 2.
	/*
			Create an overloaded function to find
	the maximum of the three values passed to it.
	The function must support int, short, and double types.
	The function should also output the type of values passed to it.
	*/








	return 0;
}
