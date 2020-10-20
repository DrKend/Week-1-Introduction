#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;
    int weatherAnswer;
    int tempAnswer;

    cout << "If it is raining input 1, if it is snowing input 2" << endl;
    cin >> weatherAnswer;

    cout << "What is the temperature in celsius?" << endl;
    cin >> tempAnswer;

    if (weatherAnswer == 1) 
    {
        if (tempAnswer > 15)
        {
            cout << "Wear a light raincoat today" << endl;
        }
        else
        {
            cout << "Wear a thick raincoat today" << endl;
        }
    }
    else if (weatherAnswer == 2)
    {
        if (tempAnswer > 5)
        {
            cout << "Wear something warm today" << endl;
        }
        else if(tempAnswer > 0)
        {
            cout << "Wrap up well today" << endl;
        }
        else
        {
            cout << "Stay at home today" << endl;
        }
    }
    else
    {
        cout << "It is not snowing or raining today, have a nice day" << endl;
    }
}
