/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isReverse (const long integer)
{
    int n, num, digit, rev = 0;
    num = integer;
    n = num;

    do
    {
        digit = num % 10;
        rev = (10 * rev) + digit;
        num = num / 10;
    } while (num != 0);

    if (n == rev)
        return true;
    else
        return false;
}

int main()
{
    vector<int>valid;

    for (int i=0; i<1000; i++)
    {
	    for (int j=0; j<1000; j++)
	    {
            const long result = i * j;
	        if (isReverse(result)==1)
                valid.push_back(result);
	    }
    }

	const long max = *max_element(valid.begin(), valid.end());
    cout << "result = " << max;

    return 0;
}

/*
Output: 906609
*/

