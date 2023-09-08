#include <iostream>


void my_pow(int* num1, int num2) {
	int result = 1;
	for (int i = 0; i < num2; i++)
		result *= *num1;
	*num1 = result;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задача 1. Массив и указатели

	std::cout << "Задача 1.\nМассив: ";
	const int size = 10;
	int arr[size]{ 1,2,3,4,5,6,7,8,9,10 };


	int* parr = arr;

	for (int i = 0; i < size; i++)
		std::cout << *(parr + i) << ' ';
	
	for (int i = 0; i < size - 1; i += 2) {
		int tmp;
		tmp = *(parr + i);
		*(parr + i) = *(parr + 1 + i);
		*(parr + 1 + i) = tmp;
	}
	std::cout << "\nРезультирующий массив: ";
	for (int i = 0; i < size; i++)
		std::cout << *(parr + i) << ' ';

	std::cout << "\n\n";

	// Задача 2. Возведение в степень

	std::cout << "Задача 2.\n";

	n = 5;

	
	std::cout << n << "^4 = ";
	my_pow(&n, 4);
	std::cout << n << "\n\n";

	return 0;
}