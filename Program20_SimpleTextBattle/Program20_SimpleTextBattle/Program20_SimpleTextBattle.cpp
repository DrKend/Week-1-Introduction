#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;

void attackChoice (int a)
{
    const int sword_damage = 300;
    const int magic_damage = 600;
    const int axe_damage = 450;
    const int troll_sword = 350;
    const int troll_magic = 50;
    const int troll_axe = 100;

    switch (a)
    {
        case 1:
            enemyHealth = enemyHealth - sword_damage;
            playerHealth = playerHealth - troll_sword;
            cout << "You strike the troll with your sword" << endl;
            cout << "The troll counter strikes with his sword" << endl;
            cout << "" << endl;


            if (playerHealth < 0)
            {
                playerHealth = 0;
            }
            cout << "Your current health is " << playerHealth << " The enemy's health is " << enemyHealth << endl;
            break;

        case 2:
            enemyHealth = enemyHealth - magic_damage;
            playerHealth = playerHealth - troll_magic;
            cout << "You strike the troll with a spell" << endl;
            cout << "The troll counter strikes with a spell of his own" << endl;
            cout << "" << endl;


            if (playerHealth < 0)
            {
                playerHealth = 0;
            }
            cout << "Your current health is " << playerHealth << " The enemy's health is " << enemyHealth << endl;
            break;

        case 3:
            enemyHealth = enemyHealth - axe_damage;
            playerHealth = playerHealth - troll_axe;
            cout << "You slash the troll with your mighty axe" << endl;
            cout << "The troll counter strikes with his axe" << endl;
            cout << "" << endl;

            if (playerHealth < 0)
            {
                playerHealth = 0;
            }
            cout << "Your current health is " << playerHealth << " The enemy's health is " << enemyHealth << endl;
            break;
    }
}

bool playState()
{
    char playAgain;
    if (enemyHealth <= 0)
    {
        cout << "You have killed the troll and won!" << endl;
        cout << "Do you want to play again? y or n" << endl;
        cin >> playAgain;

        if (playAgain == 'y')
        {
            playerHealth = 1000;
            enemyHealth = 2000;

            return true;
        }
        else
        {
            return false;
        }

    }
    if (playerHealth <= 0)
    {
        cout << "You have been killed" << endl;
        cout << "Do you want to play again? y or n" << endl;
        cin >> playAgain;

        if (playAgain == 'y')
        {
            playerHealth = 1000;
            enemyHealth = 2000;

            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
} 



int main()
{
    int PlayerChoice;
    bool playing = true;


    while (playing == true)
    {
        cout << "You have encountered a troll what will you do? 1. use sword, 2. use magic, 3. use axe" << endl;
        cout << "Depending on your choice it will have different effects" << endl;
        cin >> PlayerChoice;

        attackChoice(PlayerChoice);
        playing = playState();
    }
    return 0;
}
