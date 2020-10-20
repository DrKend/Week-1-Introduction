#include <iostream>
using namespace std;

int main()
{
    int playerInput;

    cout << "Please choose an option:  1. Sunny 2. Cloudy 3. Raining 4. Exit" << endl;
    cin >> playerInput;

    switch (playerInput)
    {
        case 1:
            cout << "Its hot as hell" << endl;
            break;
        case 2:
            cout << "Its cloudy as hell" << endl;
            break;
        case 3:
            cout << "Its raining like hell" << endl;
            break;
        case 4:
            exit;
            break;
        default:
            cout << "That is not a number from 1-4" << endl;
            break;
    }
}
