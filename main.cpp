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

int max_(int a, int b, int c) {
	int max = a;
	max = max < b ? b : max;
	return max < c ? c : max;
}

short max_(short a, short b, short c) {
	short max = a;
	max = max < b ? b : max;
	return max < c ? c : max;
}

double max_(double a, double b, double c) {
	double max = a;
	max = max < b ? b : max;
	return max < c ? c : max;
}

void print_arr(int* arr, const int size) {
	std::cout << "[ ";
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b ]\n";
}

void fill_arr(int* arr, const int size, int low, int hi) {
	for (int i = 0; i < size; ++i) {

		arr[i] = rand() % (hi + 1 - low) + low;

	}
}

template <typename T>
int prime_number(T arr[], const int size) {
	for (int i = 0; i < size; ++i) {
		int count = 0;
		if (arr[i] == 0 || arr[i] == 1)
			continue;
		for (int j = 2; j <= arr[i] / 2; ++j) {
			if (arr[i] % j == 0) {
				count++;
				break;
			}
		}
		if (count == 0) {
			return arr[i];
		}
	}
	return -1;
}


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // установка кодовой страницы на ввод текста
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
	
	std::cout << "The sum of the entered numbers is equal to " << summ(n1, n2, n3, n4, n5) << "\n\n\n";


	// Exercise 2.
	/*
		Create an embedded function that
	takes three numbers and returns their
	arithmetic mean.
	*/
	std::cout << "Exercise 2.\nCalculation of the arithmetic mean of three numbers.\nEnter three numbers -> ";
	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "The arithmetic mean is equal to " << armean(a, b, c) << ".\n\n\n";


	// Exercise 3.
	/*
			Create an overloaded function to find
	the maximum of the three values passed to it.
	The function must support int, short, and double types.
	The function should also output the type of values passed to it.
	*/
	int type = 1;

	std::cout << "Exercise 3.\nA program for finding the maximum of three numbers.\nEnter type (1)int, (2)short, (3)double -> ";
	std::cin >> type;
	std::cout << "Enter three numbers -> ";
	if (type == 1) {
		int a, b, c;
		std::cin >> a >> b >> c;
		std::cout << "max_(" << a << ", " << b << ", " << c << ") = " << max_(a, b, c) << std::endl;
	}
	else if (type == 2) {
		short a, b, c;
		std::cin >> a >> b >> c;
		std::cout << "max_(" << a << ", " << b << ", " << c << ") = " << max_(a, b, c) << std::endl;
	}
	else if (type == 3) {
		double a, b, c;
		std::cin >> a >> b >> c;
		std::cout << "max_(" << a << ", " << b << ", " << c << ") = " << max_(a, b, c) << std::endl;
	}
	else {
		std::cout << "Input error!\n";
	}
	std::cout << "\n\n";

	// Exercise 4.
	/*
		Write a template function that accepts
	an array of any type and its length of type int. 
	The function must find the first prime number in 
	the array and return it as the result of its work.
	*/
	std::cout << "Exercise 4.\nProgramm for finding first prime number in the array.\nArray:\n";
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, 0, 10);
	print_arr(arr, size);
	int pr_num = prime_number(arr, size);
	if (pr_num > 0)
		std::cout << "Prime number is equal to " << pr_num << "\n\n\n";
	else
		std::cout << "There is no prime number in the array.\n\n\n";




	return 0;
}
