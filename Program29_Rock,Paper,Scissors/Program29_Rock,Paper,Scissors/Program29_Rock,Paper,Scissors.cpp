#include <iostream>
#include <random>
using namespace std;

int main()
{
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1, 3);
	int computerChoice;
	int computerScore = 0;
	int playerScore = 0;
	int playerChoice = 0;
	string computerOut;
	string playerIn;

	cout << "Welcome to Rock, Paper, Scissors" << endl;
	while (playerScore < 3 && computerScore < 3)
	{
		computerChoice = distribution(generator);
		cout << "Enter your selection: ";
		cin >> playerIn;
		cout << endl;

		if (playerIn == "Rock" || playerIn == "rock")
		{
			playerChoice = 1;
		}
		else if (playerIn == "Paper" || playerIn == "paper")
		{
			playerChoice = 2;
		}
		else if (playerIn == "Scissors" || playerIn == "scissors")
		{
			playerChoice = 3;
		}

		switch (computerChoice) 
		{
		case 1:
			computerOut = "Rock";
			break;
		case 2:
			computerOut = "Paper";
			break;
		case 3:
			computerOut = "Scissors";
			break;
		}

		cout << "You chose: " << playerIn << endl;
		cout << "The computer chose: " << computerOut << endl;

		if (playerChoice == computerChoice)
		{
			cout << "It was a draw" << endl;
		}
		else if (playerChoice == 1 && computerChoice == 3)
		{
			cout << "Congratulations, you win" << endl;
			playerScore++;
		}
		else if (playerChoice == 2 && computerChoice == 1)
		{
			cout << "Congratulations, you win" << endl;
			playerScore++;
		}
		else if (playerChoice == 3 && computerChoice == 2)
		{
			cout << "Congratulations, you win" << endl;
			playerScore++;
		}
		else
		{
			cout << "You lost" << endl;
			computerScore++;
		}

		cout << "You need : " << 3 - playerScore << " to complete the game." << endl;
		cout << "The computer needs : " << 3 - computerScore << " to complete the game." << endl;
		cout << "*****************" << endl;
	}
	if (playerScore >= 3)
	{
		cout << "Congratulations you won..." << endl;
	}
	else
	{
		cout << "You lose..." << endl;
	}
	cout << "Game Over..." << endl;
}
