/*
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + .... 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1+2+3+4+....10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/


int main() {

	int square = 0, sum_square = 0, result = 0;
	int sum = 0;
	for (int i=1; i<=100; i++)
	{
		square = square + pow(i, 2);
		sum = sum + i;
	}
	sum_square = pow(sum, 2);
	result = sum_square - square;
	cout << result;

	return 0;
}

/*
Output: 25164150
*/
