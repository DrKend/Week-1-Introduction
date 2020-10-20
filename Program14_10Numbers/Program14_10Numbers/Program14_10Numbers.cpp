#include <iostream>
using namespace std;

int main()
{
    float firstNumber;
    float secondNumber;
    float extraNumber = 1;

    cout << "Enter the first number" << endl;
    cin >> firstNumber;
    cout << "Enter the second number" << endl;
    cin >> secondNumber;

    float sum = firstNumber + secondNumber;
    float average = sum / 2;

    cout << "The sum of the numbers is: " << sum << " The average is: " << average << endl;

    while (extraNumber != 0) 
    {
        cout << "Enter another number" << endl;
        cin >> extraNumber;

        sum = sum + extraNumber;
        average = sum / 2;
        cout << "The sum of the numbers is: " << sum << " The average is: " << average << endl;
    }
    
}
