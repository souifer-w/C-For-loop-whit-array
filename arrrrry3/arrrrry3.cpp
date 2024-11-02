#include <iostream>
using namespace std;

int main()
{
	const int x[4] = { 1,2,3,4 };
	int c = x[0];
	for (int  i = 0; i < 4; i++)
	{
		if (c < x[i])
		{

			c = x[i];
		}
	}

	cout << c << endl;

	return 0;
}