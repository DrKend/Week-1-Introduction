#include <iostream>
using namespace std;

bool oddEven (int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
    cout << "The number of odd numbers you inputted: " << numOfOdd << " The total of the odd numbers you inputted: " << oddTotal << endl;
    cout << "The number of even numbers you inputted: " << numOfEven << " The total of the even numbers you inputted: " << evenTotal << endl;
}
int main()
{
    bool evenCheck;
    int userNum;
    int oddCount = 0;
    int evenCount = 0;
    int totalOdd = 0;
    int totalEven = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Input a number" << endl;
        cin >> userNum;

        evenCheck = oddEven(userNum);

        if (evenCheck == true)
        {
            evenCount++;
            totalEven = totalEven + userNum;
        }
        else
        {
            oddCount++;
            totalOdd = totalOdd + userNum;
        }
    }
    outputResults(oddCount, totalOdd, evenCount, totalEven);
}
