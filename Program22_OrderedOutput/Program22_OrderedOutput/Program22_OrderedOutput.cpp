#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int numberList[5];

bool wayToSort(int i, int j) 
{ 
    return i > j; 
}
void biggestNumber()
{
    int max = numberList[0];
    int post = 1;
    for (int i = 0; i < 5; i++)
    {
        if (max < numberList[i])
        {
            max = numberList[i];
            post = i + 1;
        }
    }
    cout << "The biggest value you have inputted is: " << max << endl;
    cout << "The position of that number is: " << post << endl;
}
int main()
{
    int numberChoice;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number" << endl;
        cin >> numberChoice;

        numberList[i] = numberChoice;
    }

    biggestNumber();

    cout << "" << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << numberList[j] << " ";
    }
    cout << endl;
    
    sort(numberList, numberList + 5, wayToSort);
    for (int i : numberList)
    {
        cout << i << " "; 
    }
    cout << endl;

    return 0;
}
