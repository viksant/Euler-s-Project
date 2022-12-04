/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
using namespace std;

int main() {

	for (int c = 1000; c != 0; c--)
	{
		for (int b = 1; b<c; b++)
		{
			for (int a = 1; a<b; a++)
			{
				if ((a+b+c)==1000)
					if ((a*a + b*b) == c*c){
						cout << "a = " << a << endl;
						cout << "b = " << b << endl;
						cout << "c = " << c << endl;
						break;
					}
			}
		}
	}

	return 0;
}

/*
Output: 
a = 200
b = 375
c = 425
*/
