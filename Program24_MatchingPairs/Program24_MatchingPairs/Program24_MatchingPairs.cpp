#include <iostream>
#include <stdlib.h>

using namespace std;
char cards[10] = { 'E', 'B', 'D', 'A', 'C', 'E', 'D', 'B', 'A', 'C' };
bool cardsFound[10] = { false, false, false, false, false, false, false, false, false, false };
int attempts;

void drawboard()
{
    system("CLS");
    cout << "number of attempts: " << attempts << endl;

    for (int i = 0; i < 10; i++)
    {
        if (cardsFound[i])
        {
            cout << "[" << cards[i] << "]";
        }
        else
        {
            cout << "[" << i + 1 << "]";
        }
        if (i == 4)
        {
            cout << endl;
        }
    }
}
void drawboard2(int guessA, int guessB)
{
    system("CLS");
    cout << "number of attempts: " << attempts << endl;

    for (int i = 0; i < 10; i++)
    {
        if (cardsFound[i] || i+1 == guessA || i+1 == guessB)
        {
            cout << "[" << cards[i] << "]";
        }
        else
        {
            cout << "[" << i + 1 << "]";
        }
        if (i == 4)
        {
            cout << endl;
        }
    }
}
int main()
{
    int score = 0;
    bool playing = true;

    while (playing == true)
    {
        int guess1 = 0;
        int guess2 = 0;

        drawboard();
        cout << endl;
        cout << "What is your first guess?" << endl;
        cin >> guess1;

        drawboard2(guess1, guess2);
        cout << endl;

        cout << "What is your second guess?" << endl;
        cin >> guess2;

        drawboard2(guess1, guess2);
        cout << endl;

        if (cards[guess1 - 1] == cards[guess2 - 1])
        {
            cardsFound[guess1 - 1] = true;
            cardsFound[guess2 - 1] = true;
            score++;
        }
        else
        {
            cout << "Not a match" << endl;
        }

        if (score == 5)
        {
            cout << "You have won!" << endl;
            playing = false;
        }
        else
        {
            attempts++;
        }
    }
}
