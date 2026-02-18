#include <iostream>
using namespace std;

int main()
{
	double change;
	cin >> change;
	int intChange = change * 100;

	int counter = 0;

	while (intChange != 0)
	{
		// 2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01;

		if (intChange / 200 >= 1) //  454 - 5
		{

			intChange -= 200;
			counter++;
		}
		else if (intChange / 100 >= 1)
		{
			intChange -= 100;
			counter++;
		}
		else if (intChange / 50 >= 1)
		{
			intChange -= 50;
			counter++;
		}
		else if (intChange / 20 >= 1)
		{
			intChange -= 20;
			counter++;
		}
		else if (intChange / 10 >= 1)
		{
			intChange -= 10;
			counter++;
		}
		else if (intChange / 5 >= 1)
		{
			intChange -= 5;
			counter++;
		}
		else if (intChange / 2 >= 1)
		{
			intChange -= 2;
			counter++;
		}
		else if (intChange / 1 >= 1)
		{
			intChange -= 1;
			counter++;
		}
	}

	cout << counter << endl;

	return 0;
}