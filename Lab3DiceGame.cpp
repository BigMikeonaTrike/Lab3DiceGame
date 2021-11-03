#include <iostream>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

struct Players {
	string name;
	int score;
	int total;

	Players(string n = "", int s = 0, int t = 0) {
		name = n;
		score = s;
		total = t;
	}
};

struct Dice {
	int throwValue;

	Dice(int tV = 0) {
		throwValue = tV;
	}
};

int menu();
void printLine(int length);
void instructions();
int setMaxScore();
struct Player inputPlayers(struct Players *p1);

int main() {
	int option;
	int score = 0;
	Players player1, player2;
	Players* ptr1;
	ptr1 = &player1;
a:
	option = menu();
	switch (option) {
	case 1:
		instructions();
		break;
	case 2:
		score = setMaxScore();
		break;
	case 3:
		inputPlayers(ptr1);
		break;
	case 4:
		//play();
		break;
	case 5:
		//scoreboard();
		break;
	case 6:
		return 0;
	default:
		break;
	}
	goto a;
}

struct Player inputPlayers(struct Player *p1){
	return(p1);
	
}

int setMaxScore() {
	int s;
	cout << "\nEnter Maximum Score: ";
	cin >> s;
	return s;
}

void printLine(int length = 75) {
	cout << endl;
	for (int i = 0; i < length; i++) {
		cout << "*";
	}
	cout << endl;
}

void instructions() {
	cout << "\n\t\t\t\t\tInstructions\n";
	printLine(90);
	cout << "\n1. Players must feed their names and pre-set the maximum score before the game starts";
	cout << "\n2. Each player has two 6 sided dice to roll, and the players get turns to earn points";
	cout << "\n3. For each roll, dice 1 and dice 2 values will be added for the corresponding player";
	cout << "\n4. If both dice values are the same that players score will be doubled for that turn\n\t Eg. : dice 1 and 2 are both 2, therfore their score is (2 + 2) x 2 = 8";
	cout << "\n5. Whoever reaches the maximum score first is The Winner, and the game will end";
	cout << "\n6. After each round, each player scoreboard will be updated and displayed\n";
	printLine(90);
}

int menu() {
	int input;
	cout << "\nTwo Player Dice Game - - Must Pre-Set Maximum Score";
	printLine();
	cout << "\n1. Instructions\n2. Set Maximum Score\n3. Read Players\n4. Play\n5. Display Scoreboard\n6. End";
	cout << "\n\nEnter your option: ";
	cin >> input;
	return input;
}