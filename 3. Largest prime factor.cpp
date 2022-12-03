/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	long long number = 600851475143;

	vector<int>multiples;

	int i=2;

	while (number != 1){
		while (number % i == 0 ) {
			multiples.push_back(i);
			number = number / i;
			if (number % i != 0)
				i++;
			if (number == 1)
				break;
		}
		i++;
	}

	for (const int primes : multiples)
		cout << primes <<endl;

	return 0;
}

/*
Output: 
71
839
1471
6857
*/
