/*
 * File: Lab Problem P8.1
 * Author: Parker West
 * Date: 10/24/2024
 * Description: Program that counts the number of vowles in a string
*/
#include <iostream>
#include <string>
using namespace std; 

//function prototypes
int countCharacter(string str);

int main() {
	string str;
	cout << "Enter a string or Q to quit: ";
	getline(cin, str);
	cout << "\nThe string length is: " << countCharacter(str);
}

int countCharacter(string str) {
	int length = str.length();
	return length;

}
