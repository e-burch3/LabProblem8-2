/*
* File: LabProblem8-2.cpp
*
* Author: Ethan Burch
* Description: counts the number of words separated by spaces in a string
*/

#include <iostream>
#include <string>

using namespace std;

int countWords(string str);

int main(void) {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "q" || input == "Q") break;
		cout << "Word count: " << countWords(input) << endl;
	}
	return 0;
}
int countWords(string str) {
	int count = 0;
	char currChar;
	char prevChar = ' ';
	str += ' ';
	for (int i = 0; i < str.length(); i++) {
		currChar = str.at(i);
		if (prevChar != ' ' && currChar == ' ') {
			count++;
		}
		prevChar = currChar;
	}
	return count;
}