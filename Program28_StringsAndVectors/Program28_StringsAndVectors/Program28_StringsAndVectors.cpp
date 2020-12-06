#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int maxInv = 3;
	vector<string> inventory;
	string ItemChoice;
	int replaceChoice;
	int inventorySize = 1;
	inventory.push_back("sword");

	while (inventorySize < maxInv)
	{
		cout << "Type which item you wish to keep: Staff or Knife" << endl;
		getline(cin, ItemChoice);
		inventory.push_back(ItemChoice);
		inventorySize++;

		cout << "Your inventory holds:" << endl;
		for (int i = 0; i < inventory.size(); i++)
		{
			cout << inventory.at(i) << endl;
		}

		if (inventorySize < maxInv)
		{
			cout << "Type which item you wish to keep: Healing potion or Fire spell" << endl;
			getline(cin, ItemChoice);
			inventory.push_back(ItemChoice);
			inventorySize++;
		}

		cout << "Your inventory holds:" << endl;
		for (int i = 0; i < inventory.size(); i++)
		{
			cout << inventory.at(i) << endl;
		}
	}
	cout << endl;
	cout << "Your inventory is full!" << endl;
	cout << endl;

	cout << "You have found a magic ring what would you like to replace in your inventory?" << endl << "Choices:" << endl;

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << i+1 << ": " << inventory.at(i) << endl;
	}
	cin >> replaceChoice;
	inventory[replaceChoice - 1] = "magic ring";

	cout << endl;
	cout << "Inventory is now:" << endl;
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << inventory.at(i) << endl;
	}

	cout << endl;
	cout << "You have been robbed!!" << endl;
	cout << "Inventory is now:" << endl;
	inventory.clear();
	inventory.push_back("Empty!");
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << inventory.at(i) << endl;
	}
}
