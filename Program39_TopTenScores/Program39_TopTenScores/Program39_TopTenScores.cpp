#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct scoreDetails
{
    string name;
    int score;
};
int main()
{
    scoreDetails userInput;
    scoreDetails fileInput;

    int scores[10];
    bool menu = true;
    int userChoice;

    ifstream infile;
    ofstream outfile;

    while (menu == true)
    {
        cout << "What would you like to do?" << endl;
        cout << "1 = Enter a score, 2 = Display scores, 3 = Exit" << endl;
        cin >> userChoice;

        if (userChoice == 1)
        {
            infile.open("HighScores", ios::in | ios::app);

            if (infile)
            {
                cout << "Please enter the score" << endl;
                cin >> userInput.name;

                cout << "Please enter the name" << endl;
                cin >> userInput.score;

                int cnt = 0;
                while (!infile.eof())
                {
                    infile >> fileInput.score;
                    fileInput.score >> scores[cnt];
                    cnt++;
                }
                for (int i = 0; i < 10; i++) 
                {
                    cout << scores[i] << endl;
                }
            }
            infile.close();
        }
        else if (userChoice == 2)
        {

        }
        else if (userChoice == 3)
        {
            exit(0);
        }
        else
        {
            cout << "That is not 1, 2, or 3 try again" << endl;
        }
    }
}
