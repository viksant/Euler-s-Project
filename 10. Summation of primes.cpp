/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
	if (n == 2)
		return true;
	else {
		for (int i = 2; i < n; i++)
			if (n % i == 0)
				return false;
		return true;
	}
}

int main() {

	vector<long long>vector;

	for (long long i = 2; i<2000000; i++){
		if (isPrime(i))
			vector.push_back(i);
	}

	long long sum = 0;

	for (long long number : vector)
		sum += number;

	cout << sum << endl;
	return 0;
}

/*
Output: 142913828922
*/
