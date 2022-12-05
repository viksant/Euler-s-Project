/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
	if (n == 2)
		return true;
	else{
		for (int i = 2; i <n; i++)
			if (n % i == 0)
				return false;
		return true;
	}
}

int main() {

	int n = 2;

	vector<int>numbers;
	while (numbers.size() != 10001)
	{
		
		if (isPrime(n))
			numbers.push_back(n);
		n++;
	}

	cout << numbers.at(10000) << endl;
}

/*
Output: 104743
*/
