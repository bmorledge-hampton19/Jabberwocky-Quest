// Pre-processor Directives
#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

// Main Function
int main() {

	string playerName;
	Player player();

	cout << "Welcome to the realm of the Jabberwocky!" << endl;
	cout << "What is your name, adventurous one? ";
	getline(cin, playerName);

	player.assignName(playerName);

}