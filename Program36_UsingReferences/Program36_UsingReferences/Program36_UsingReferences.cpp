#include <iostream>
using namespace std;

void plus25(int& num);
void minus25(int& num);

int main()
{
    int num;
    int& rNum = num;

    cout << "Input a number" << endl;
    cin >> rNum;
    cout << num << endl;

    plus25(rNum);
    cout << num << endl;

    cout << "Input another number" << endl;
    cin >> rNum;
    cout << num << endl;

    minus25(rNum);
    cout << num << endl;

    return 0;
}

void plus25(int& num)
{
    num = num + 25;
}

void minus25(int& num)
{
    num = num - 25;
}
