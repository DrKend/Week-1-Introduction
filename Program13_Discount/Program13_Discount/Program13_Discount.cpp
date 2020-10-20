#include <iostream>
using namespace std;

int main()
{
    char userStatus;
    int gameChoice;

    cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other" << endl;
    cin >> userStatus;

    cout << "Which game would you like, 1 or 2?" << endl;
    cin >> gameChoice;

    if (userStatus == 's' && gameChoice == 1 || userStatus == 't' && gameChoice == 1)
    {
        cout << "You can get a 20% discount" << endl;
    }
    else if (userStatus == 's' && gameChoice == 2 || userStatus == 't' && gameChoice == 2)
    {
        cout << "You can get a 10% discount" << endl;
    }
    else
    {
        cout << "You are not entitled to a discount" << endl;
    }
}
