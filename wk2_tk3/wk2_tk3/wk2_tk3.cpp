#include <iostream>
using namespace std;

int main()
{
	char play_again;
	cout << "Do you want to play again?, enter y or n..." << endl;

	cin >> play_again;

	switch (play_again)
	{
	case 'y':
		cout << "You have chosen to play again" << endl;
		break;

	case 'n':
		cout << "Goodbye" << endl;
		break;

	default:
		cout << "That is not y or n" << endl;
	}
}
