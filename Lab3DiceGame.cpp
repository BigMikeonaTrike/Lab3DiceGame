#include <iostream>
#include <time.h>

using namespace std;

int diceRoll();
void instructions();
void printLine();

int main()
{

    int input, MaxScore;
    string players[2];
    cout << "Game";
a:
    cout << "\n1. Instructions\n2. Set Max Score\n3. Read Players\n4. Play\n5. Display Scoreboard\n6. End";
    cout << "\n\nEnter your option: ";
    cin >> input;
    switch (input) {
    case 1: 
        instructions();
        goto a;
    case 2:
        cout << "\nEnter Max Score: ";
        cin >> MaxScore;
        goto a;
    case 3:
        for (int i = 1; i <= 2; i++) {
            cout << "\n\nEnter Player " << i << " Name: ";
            cin >> players[i-1]; 
        }
        goto a;
    case 4:
        goto a;
    case 5:
        cout << "\n\n\t\t\tScore Board\n";
        printLine();
        for (int i = 0; i < 2; i++) {
            cout << "\nFinal Score for " << players[i] << " is: ";
        }
        goto a;
    case 6:
        return 0;
    default:
        goto a;
    }

}


void instructions() {
    cout<< "\n";
}

int diceRoll() {
    srand(time(NULL));
    return rand() % 6 + 1;
}

void printLine() {
    cout << endl;
    for (int i = 0; i < 100; i++) {
        cout << "*";
    }
    cout << endl;
}