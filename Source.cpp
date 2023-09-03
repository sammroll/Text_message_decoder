// P03 Text Message Decoder
//		Decodes common SMS abbreviations in a text message
// Samantha Roldan
//

#include <iostream>
#include <string>    
using namespace std;

int main() {

	string textMessage;
	int abrevBFF;
	int abrevIDK;
	int abrevJK;
	int abrevTMI;
	int abrevTTYL;


	cout << "** P03: Text Message Decoder ***" << endl;

	//get input from user
	cout << endl;
	cout << "Enter text message: ";
	getline(cin, textMessage);

	//search the text message input and find the abbreviations below
	abrevBFF = textMessage.find("BFF");
	abrevIDK = textMessage.find("IDK");
	abrevJK = textMessage.find("JK");
	abrevTMI = textMessage.find("TMI");
	abrevTTYL = textMessage.find("TTYL");

	//if any of the abbreviations are found, then output the correlated definitions of each one
	cout << endl;
	if (abrevBFF != string::npos) {
		cout << "BFF: best friend's forever" << endl;
	}
	if (abrevIDK != string::npos) {
		cout << "IDK: I dont know" << endl;
	}
	if (abrevJK != string::npos) {
		cout << "JK: just kidding" << endl;
	}
	if (abrevTMI != string::npos) {
		cout << "TMI: too much information" << endl;
	}
	if (abrevTTYL != string::npos) {
		cout << "TTYL: talk to you later" << endl;
	}


	return 0;
}
