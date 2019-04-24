#include <iostream>
#include <string>
#include <algorithm>
using std::string;
std::string text;
std::string valid = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
std::string end = ".";

string grab_letter() {
	std::cout << "enter line to check (single '.' terminates)" << '\n';
	std::getline(std::cin, text);
	return text;
}
bool validletters(std::string text) {
	for (unsigned i = 0; i < text.size(); i++) {
		for (unsigned j = 0; j < valid.size(); j++) {
			if (text[i] != valid[j]) {
				return false;
			}
		}
	}
	return true;
}

string contains(std::string text) {
	std::string has;
	for (unsigned i = 0; i < text.size(); i++) {
		for (unsigned j = 0; j < valid.size(); j++) {
			if (text[i] == valid[j]) {
				has += valid[j];
			}
		}
	}
	return has;
}

string alphabet(string grab_letter, string contains){
	std::string missing_letter = text;
	std::string valid2 = "abcdefghijklmnopqrstuvwxyz";
	std::string success = "all letters present";
	std::string failure = "invalid line";
	std::string missing = "missing letters: ";
	
	contains(grab_letter);
	
	std::cout << ;
	
	return "wow";
}

int main(){
	grab_letter;
	while (text != end) {
		validletters(grab_letter());
		alphabet(grab_letter(), contains(grab_letter()));
	}
}