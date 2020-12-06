#include <iostream>
#include <string>
using namespace std;

struct personDetails
{
	string name;
	int age;
	string telephoneNumber;
	void printDetails();
};
void personDetails::printDetails()
{
	cout << "Your Details:" << endl;
	cout << name << endl;
	cout << age << endl;
	cout << telephoneNumber << endl;
}

int main()
{
	personDetails Details;
	string startName;
	int startAge;
	string startTelephoneNumber;

	cout << "Firstly what is your full name?" << endl;
	getline(cin, Details.name);

	cout << "What is your age?" << endl;
	cin >> Details.age;

	cout << "What is your telephone number?" << endl;
	cin >> Details.telephoneNumber;

	Details.printDetails();
}
