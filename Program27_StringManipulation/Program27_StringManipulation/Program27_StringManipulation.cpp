#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int pos;
	string name;
	string name2;
	string testString = "Do you know who loves c++ XX does!";
	bool length = true;

	cout << "Enter your name" << endl;
	getline(cin, name);

	testString.insert(27, name);
	cout << testString << endl;

	testString.erase(26, 1);
	testString.erase(26 + name.length(), 1);
	cout << testString << endl;

	while (length == true)
	{
		cout << "Enter a second name, it must be longer" << endl;
		getline(cin, name2);

		if (name.length() > name2.length())
		{
			cout << "That name is shorter" << endl;
		}
		else
		{
			testString.erase(26, name.length());
			testString.insert(26, name2);
			cout << testString << endl;
			length = false;
		}
	}
	return 0;
}
