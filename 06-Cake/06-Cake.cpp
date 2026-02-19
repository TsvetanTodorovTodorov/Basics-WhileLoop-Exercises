#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main()
{
	int cakeWidth, cakeLength;
	cin >> cakeWidth >> cakeLength;

	int cake = cakeWidth * cakeLength; // размери на цялата торта
	int piecesLeft = cake; // парчета от които ще се вземат от тортата

	string command; // команда
	cin >> command;

	while (command != "STOP") // цикли се до получаване на команда СТОП
	{
		int pieces = stoi(command); // преобразува се стринга в число

		piecesLeft -= pieces; // махат се парчета от тортата и пишем това което остава

		if (piecesLeft <= 0)
		{
			break;
		}

		cin >> command;
	}

	if (piecesLeft >= 0)
	{
		cout << piecesLeft << " pieces are left." << endl;
	}
	else {
		cout << "No more cake left! You need " << abs(piecesLeft) << " pieces more." << endl;
	}


	return 0;
}