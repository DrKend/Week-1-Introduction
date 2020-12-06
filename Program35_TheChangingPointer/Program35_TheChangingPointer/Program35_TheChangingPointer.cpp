#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2)
{
    int num1;
    int num2;

    cout << "Please enter a number" << endl;
    cin >> num1;
    cout << "Please enter a second number" << endl;
    cin >> num2;

    *n1 = num1;
    *n2 = num2;
}
void outputDetails(int& integer1, int& integer2, int* pointer)
{
    cout << "value of num1: " << integer1 << endl;
    cout << "address of num1: " << &integer1 << endl;
    cout << "value of num2: " << integer2 << endl;
    cout << "address of num2: " << &integer2 << endl;

    cout << "value of pnum: " << pointer << endl;
    cout << "dereferenced value of pnum: " << *pointer << endl;
    cout << "memory address of pnum: " << &pointer << endl;
    cout << endl;
}
int main()
{
    int num1;
    int num2;

    int* pnum = &num1;
    inputDetails(&num1, &num2);

    cout << "pointer set to num1" << endl;
    cout << endl;
    outputDetails(num1, num2 ,pnum);

    cout << "pointer set to num2" << endl;
    cout << endl;
    pnum = &num2;
    outputDetails(num1, num2, pnum);

    pnum = NULL;

    return 0;
}
