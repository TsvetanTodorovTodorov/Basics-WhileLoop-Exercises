#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main()
{
    // if when she goes home and we create a var that adds final steps. So we have to read one final input with cin >>

    string command;
    getline(cin, command);

    int totalSteps = 0;

    while (command != "Going home")
    {
        int steps = stoi(command);
        totalSteps += steps;

        if (totalSteps >= 10000)
        {
            cout << "Goal reached! Good job!" << endl;
            return 0;
        }
        getline(cin, command);
    }

    int finalSteps;
    cin >> finalSteps;
    totalSteps += finalSteps;

    if (totalSteps >= 10000)
    {
        cout << "Goal reached! Good job!" << endl;
    }
    else
    {
        cout << 10000 - totalSteps << " more steps to reach goal." << endl;
    }

    return 0;
}