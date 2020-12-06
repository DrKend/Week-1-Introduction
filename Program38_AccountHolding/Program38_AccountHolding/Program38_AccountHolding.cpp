#include <iostream>
#include <fstream>
using namespace std;

struct accountDetails
{
    string name;
    int accountNumber;
    double balance;
};

int main()
{
    accountDetails userInput;
    accountDetails fileInput;

    bool menu = true;
    bool more = true;

    int userChoice;
    char userMore;

    ifstream infile;
    ofstream outfile;

    while (menu == true)
    {
        cout << "What would you like to do with your account?" << endl;
        cout << "1 = add details, 2 = output accounts, 3 = output accounts with a bal over 10000, 4 = exit" << endl;
        cin >> userChoice;

        if (userChoice == 1)
        {
            outfile.open("Details", ios::out | ios::app);
            while (more == true)
            {
                if (outfile)
                {
                    cout << "What is your name" << endl;
                    cin >> userInput.name;

                    cout << "What is your account number" << endl;
                    cin >> userInput.accountNumber;

                    cout << "What is your balance" << endl;
                    cin >> userInput.balance;

                    outfile << userInput.name << endl;
                    outfile << userInput.accountNumber << endl;
                    outfile << userInput.balance << endl;

                    cout << "Do you want to enter more details?" << endl;
                    cin >> userMore;

                    if (userMore != 'y')
                    {
                        more = false;
                    }
                }
                else
                {
                    cerr << "file could not be opened!";
                    exit(1);
                }
            }
            outfile.close();
        }
        else if (userChoice == 2)
        {
            more = true;
            infile.open("Details");
            if (infile)
            {
                while (infile >> fileInput.name)
                {
                    infile >> fileInput.accountNumber;
                    infile >> fileInput.balance;

                    cout << fileInput.name << endl;
                    cout << fileInput.accountNumber << endl;
                    cout << fileInput.balance << endl;
                }
            }
            infile.close();
        }
        else if (userChoice == 3)
        {
            more = true;
            infile.open("Details");
            if (infile)
            {
                while (infile >> fileInput.name)
                {
                    infile >> fileInput.accountNumber;
                    infile >> fileInput.balance;

                    if (fileInput.balance > 10000)
                    {
                        cout << fileInput.name << endl;
                        cout << fileInput.accountNumber << endl;
                        cout << fileInput.balance << endl;
                    }
                    else
                    {
                        cout << "This account does not have a balance over 10000" << endl;
                    }
                }
            }
            infile.close();
        }
        else if (userChoice == 4)
        {
            exit(0);
        }
        else
        {
            cout << "That is not 1, 2, 3 or 4 try again" << endl;
        }
    }
}
