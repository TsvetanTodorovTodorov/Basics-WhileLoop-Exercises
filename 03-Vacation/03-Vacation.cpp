#include <iostream>
#include <string>
using namespace std;

int main()
{
    double requiredMoney, availableMoney;
    cin >> requiredMoney >> availableMoney;

    // continues days counter & past days
    int consistantDays = 0;
    int totalDays = 0;

    while (true)
    {
        string action;
        cin >> action;
        double actionMoney;
        cin >> actionMoney;


        totalDays++;

        if (action == "spend") // not done
        {
            consistantDays++;
            availableMoney -= actionMoney;

            if (availableMoney < 0)
            {
                availableMoney = 0;
            }

            if (consistantDays == 5)
            {
                cout << "You can't save the money." << endl;
                cout << totalDays << endl;
                return 0;
            }
        }
        else if (action == "save") // here is done
        {
            consistantDays = 0;
            availableMoney += actionMoney;

            if (availableMoney >= requiredMoney)
            {
                cout << "You saved the money for " << totalDays << " days." << endl;
                return 0;
            }
        }

    }

    return 0;
}