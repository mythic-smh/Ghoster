#include <iostream>
#include <string>
using namespace std;

int main() {
while (true) {
    cout << "Welcome to ~Ghoster~"
<< endl;
    cout << "Please type your name."
    << endl;
    string userName;
    cin >> userName;
    cout << "So your name is " <<
userName << " ?" << endl;
    cout << "If this is correct please type \"Yes\""
<< endl;
    string Answer;
    cin >> Answer;
    if (Answer == "Yes" || Answer == 
"yes") {
    cout << "Hello " << userName <<
" I hope you enjoy!" << endl;
    } else {
    cout << "Syntax error please restart." << endl;
    continue;
}
    cout << "Now we will get on how to move: W is for moving forward, A is for moving to the left, S if for moving backwards and finally D is for moving to the right" <<
endl;
    
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
