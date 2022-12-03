/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

bool isDivisible(int number)
{
	for (int i=1; i<=20; i++)
		if (number % i != 0)
			return false;
	return true;
}

int main() {
	int number = 1;
	while (true){
		if (isDivisible(number))
			break;
		number++;
	}

	std::cout << number;
	return 0;
}

/*
Output: 232792560
*/
