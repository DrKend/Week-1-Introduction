#include <iostream>
using namespace std;

int smallestNumber(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else if (a == b)
    {
        return a;
    }
    else
    {
        return a;
    }
}

int main()
{
    char cont = 'Y';

    while (cont == 'Y')
    {
        int num1;
        int num2;

        cout << "Enter your first number" << endl;
        cin >> num1;

        cout << "Enter your second number" << endl;
        cin >> num2;

        cout << "The smallest number is " << smallestNumber(num1, num2) << endl;

        cout << "Continue Y or N" << endl;
        cin >> cont;

    }

}
