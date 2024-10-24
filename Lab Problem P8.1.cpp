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
int countVowel(string str);

int main() {
	string str;
	cout << "Enter a string or Q to quit: ";
	getline(cin, str);

	cout << "The number of vowels is: " << countVowel(str);

}

int countVowel(string str) {
	int length = str.length();
	char currentCharacter = ' ';
	int numVowels = 0;
	for (int i = 0; i < length; i++) {
		currentCharacter = str[i];
		switch (currentCharacter) {
		case 'A':
			numVowels += 1;
			break;
		case 'a':
			numVowels += 1;
			break;
		case 'E':
			numVowels += 1;
			break;
		case 'e':
			numVowels += 1;
			break;
		case 'I':
			numVowels += 1;
			break;
		case 'i':
			numVowels += 1;
			break;
		case 'O':
			numVowels += 1;
			break;
		case 'o':
			numVowels += 1;
			break;
		case 'U':
			numVowels += 1;
			break;
		case 'u':
			numVowels += 1;
			break;
		}

	}
	return numVowels;
}
