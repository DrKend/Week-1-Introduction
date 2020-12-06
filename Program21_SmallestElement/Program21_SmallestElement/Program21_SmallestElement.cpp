#include <iostream>
using namespace std;

int main()
{
    int numberList[10];
    int numberChoice;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number" << endl;
        cin >> numberChoice;

        numberList[i] = numberChoice;
    }

    int min = numberList[0];
    int post = 1;
    for (int i = 0; i < 10; i++)
    {
        if (min > numberList[i])
        {
            min = numberList[i];
            post = i + 1;
        }
    }

    cout << "The smallest value you have inputted is: " << min << endl;
    cout << "The position of that number is: " << post << endl;
    return 0;
}
