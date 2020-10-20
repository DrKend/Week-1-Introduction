#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int starNumber;
    bool numInput = false;
    char repeat = 'Y';

    while (numInput == false && repeat == 'Y')
    {
        cout << "Input a number between 1 and 10" << endl;
        cin >> starNumber;
        if (starNumber < 1)
        {
            cout << "Your number is less than 1" << endl;
        }
        else
        {
            if (starNumber < 11)
            {
                numInput = true;
                starNumber = starNumber + 1;
                for (int i = 0; i < starNumber; i++)
                {
                    for (int j = 0; j < i; j++)
                    {
                        cout << "* ";
                    }
                    cout << "" << endl;
                }
                numInput = false;
                cout << "Would you like to have another go [Y or N]" << endl;
                cin >> repeat;
            }
            else
            {
                cout << "Your number is more than 10" << endl;
            }
        }
    }
    cout << "Goodbye" << endl;
    Sleep(2000);
}
