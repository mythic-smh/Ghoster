#include <iostream>
#include <string>
using namespace std;

int main() {
while (true) {
    cout << "Welcome to ~Ghoster~"
<< endl;
    cout << "Please type player 1s name."
    << endl;
    string playerOne;
    cin >> playerOne;
    cout << "So your name is " <<
playerOne << " ?" << endl;
    cout << "If this is correct please type \"Yes\""
<< endl;
    string Answer1;
    cin >> Answer1;
    if (Answer1 == "Yes" || Answer1 == 
"yes") {
    cout << "Welcome,  " << playerOne <<
" I hope you enjoy!" << endl;
    } else {
    cout << "Syntax error please restart." << endl;
    continue;
} 
    cout << "Now please type in player 2s name" << endl;
    string playerTwo;
    cin >> playerTwo;
    cout << "So your name is " << playerTwo << " ?" << endl;
    cout << "If this is correct please type \"Yes\"" << endl;
    string answerTwo;
    cin >> answerTwo;
    if (answerTwo == "Yes" || answerTwo == "two") {
        cout << "Welcome , " << playerTwo <<
        " I hope you enjoy!" << endl;
    } else {
        cout << "Syntax error pleaes restart." << endl;
        continue;
    } 
    cout << "Please type in which character you would like to play as." << endl;
    cout << "Here are your choices:" << endl;
    cout << "" << endl;
    cout << "Please type \"Start\" to start the program." << endl;
    string Correct;
    cin >> Correct;
    if (Correct == "Start"|| Correct == "start") {
        cout << "The game will now start:" << endl;
    } else {
    cout << "";
    }
}
	return 0;
}
