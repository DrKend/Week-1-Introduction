#include <iostream>
using namespace std;

void comma2blank(char* textToChange)
{
    for (int i = 0; i < 30; i++)
    {
        if (textToChange[i] == ',')
        {
            textToChange[i] = ' ';
        }
    }
}
int main()
{
    char userText[30];

    cout << "Please enter some text however replace the spaces with commas." << endl;
    cin >> userText;

    comma2blank(userText);
    cout << userText << endl;
}
