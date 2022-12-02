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
