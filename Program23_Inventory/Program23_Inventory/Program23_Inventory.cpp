#include <iostream>

using namespace std;

const int MAX_ITEMS = 4;
int numItems = 0;
string inventory[MAX_ITEMS];


int main()
{
    char playerChoice;

    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";

    cout << "You have picked up a wizard staff, would you like to swap this with the dagger in your inventory? y or n " << endl;
    cin >> playerChoice;

    if (playerChoice == 'y')
    {
        cout << "You have decided to pick up the wizard staff" << endl;
        inventory[3] = "wizard staff";
    }
    else
    {
        cout << "You have decided to leave the wizard staff" << endl;

    }
    for (int i = 0; i < 4; i++)
    {
        cout << inventory[i] << ", ";

    }
    cout << endl;

    return 0;
}
