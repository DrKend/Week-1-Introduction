#include <iostream>
using namespace std;

int main()
{
    int PlayersLife = 100;
    int Damage;

    cout << "Your HP: " << PlayersLife << endl;

    for (int i = 1; i < 11; i++)
    {
        cout << "Question " << i << ":  How much damage shall i deal?" << endl;
        cin >> Damage;
        PlayersLife = PlayersLife - Damage;

        if (PlayersLife <= 0)
        {
            cout << "Early end. Player Died!" << endl;
            break;
        }
    }
    if (PlayersLife > 0)
    {
        cout << "All questions asked player survived!" << endl;
    }                  
    return 0;
}
