/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int size = 1000;

	vector<int>multiples;
	int sum = 0;

	for (int i=0; i<size; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			multiples.push_back(i);
	}

	for (int number : multiples)
		sum = sum + number;

	cout << "Result = " << sum;

	return 0;
}

/*
Output -> Result = 233168
*/
