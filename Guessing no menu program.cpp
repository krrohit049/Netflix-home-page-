
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	cout << "\n\t\t\t----------Welcome to Guesses Number game------------------"
		<< endl;


	while (true) {
		cout << "\n*******************choice the  level  difficulty********************\n";
		cout << "\n1 For easy level\t";
		cout << "2 For medium level\t";
		cout << "3 For difficult level\t";
		cout << "0 For exit the game\n" << endl;
		
			cout << "\t\tYou have to guess a number between 1 and 100. "
			
		<< endl;

		// select the level of difficulty
		int difficultyChoice;
		cout << "\nchoose your level number  : ";
		cin >> difficultyChoice;

		// generating the secret number
		srand(time(0));
		int secretNumber = 1 + (rand() % 100);
		int playerChoice;

		// Difficulty Level:Easy
		if (difficultyChoice == 1) {
			cout << "\nYou have 10 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 10;
			for (int i = 1; i <= 10; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determining if the playerChoice matches
				// the secret number
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << " wrong, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << "choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}

		// Difficulty level : Medium
		else if (difficultyChoice == 2) {
			cout << "\nYou have 7 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determining if the playerChoice matches
				// the secret number
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "wrong, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
		// Difficulty level : Medium
		else if (difficultyChoice == 3) {
			cout << "\nYou have 5 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determining if the playerChoice matches
				// the secret number
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "wrong, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
		// To end the game
		else if (difficultyChoice == 0) {
			exit(0);
		}
		else {
			cout << "Wrong choice, Enter valid choice to "
					"play the game! (0,1,2,3)"
				<< endl;
		}
	}
	return 0;
}

