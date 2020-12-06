#include <iostream>
using namespace std;

int main()
{
	char name[15] = {};

	cout << "Input your first and middle initial, followed by your surname " << endl;
	cin.getline(name, 15);

	cout << name[0] << endl;
	for (int i = 0; i < 3; i++)
	{
		if (name[i] == ' ')
		{
			cout << name[i + 1] << endl;
		}
	}
	for (int i = 3; i < 14; i++)
	{
		cout << name[i + 1];
	}
}
