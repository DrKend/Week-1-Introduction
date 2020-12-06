#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void userNameChange(string& user);

int main()
{
    string userName;
    string& rUserName = userName;

    cout << "Enter a username" << endl;
    cin >> userName;
    cout << "That username is taken" << endl;

    userNameChange(rUserName);
    cout << userName << endl;

    return 0;
}

void userNameChange(string& user)
{
    srand(time(NULL));
    int num = rand();
    user = user + to_string(num);
}


