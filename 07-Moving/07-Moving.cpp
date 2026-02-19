#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
	int widthSpace, lengthSpace, highSpace;
	cin >> widthSpace >> lengthSpace >> highSpace;

	int space = widthSpace * lengthSpace * highSpace;

	int sumBags = 0;

	string command;
	cin >> command;

	while (command != "Done")
	{
		int bag = stoi(command);
		sumBags += bag;

		if (sumBags >= space)
		{
			break;
		}

		cin >> command;
	}

	int spaceLeft = abs(space - sumBags);

	if (sumBags < space)
	{
		cout << spaceLeft  << " Cubic meters left." << endl;
	}
	else {
		cout << "No more free space! You need " << spaceLeft << " Cubic meters more." << endl;
	}

	return 0;
}