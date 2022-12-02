#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int a = 0, b = 1, c=1;
	int sum=0;
	vector<int>vector;
  
	int i = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
    
		if (c % 2 == 0)
			vector.push_back(c);
		i++;
	}

	for (int number : vector)
		sum += number;

	cout << sum;

	return 0;
}
