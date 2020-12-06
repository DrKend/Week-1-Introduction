#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sentence;
	int pos;

	cout << "Enter a sentence" << endl;
	getline(cin, sentence);

	cout << sentence << endl;

	replace(sentence.begin(), sentence.end(), 'e', 'x');

	cout << sentence << endl;
}
