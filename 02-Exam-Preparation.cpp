#include <iostream>
#include <string>
using namespace std;

int main()
{
    int poorGradesLimit;
    cin >> poorGradesLimit;
    cin.ignore();

    string problem;
    int grade;
    double sum = 0.0;
    int counter = 0;
    int poorGradesCounter = 0;
    string lastProblem;

    cout.setf(ios::fixed);
    cout.precision(2);

    // while reach the poorGrades or command = Enough

    while (true)
    {
        getline(cin, problem);

        if (problem == "Enough")
        {
            break;
        }

        cin >> grade;
        cin.ignore();

        sum += grade;
        counter++;
        lastProblem = problem;

        if (grade <= 4)
        {
            poorGradesCounter++;
        }

        if (poorGradesCounter == poorGradesLimit)
        {
            cout << "You need a break, " << poorGradesLimit << " poor grades." << endl;
            return 0;
        }
    }

    double average = sum / counter;

    cout << "Average score: " << average << endl;
    cout << "Number of problems: " << counter << endl;
    cout << "Last problem: " << lastProblem << endl;

    return 0;
}