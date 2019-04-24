#include <iostream>
#include <string>
#include <algorithm>
using std::string;
std::string text;
std::string valid = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string grab_letter() {
	std::cout << "Enter line to check (single '.' terminates)" << '\n';
	std::getline(std::cin, text);
	return text;
}
bool validletters(std::string text) {
	for (unsigned i = 0; i < text.size(); i++) {
		for (unsigned j = 0; j < valid.size; j++) {
			if (text[i] == valid[j]) {
				//char letter = valid[j];
				return valid[j];
			}
		}
	}

}

char contains(std::string text) {
	for (unsigned i = 0; i < text.size(); i++){
		for (unsigned j = 0; j < valid.size; j++) {
			if (text[i] == valid[j]) {
				//char letter = valid[j];
				return valid[j];
			}
		}
	}
	
}
string alphabet(string grab_letter){
	std::string missing_letter = text;
	std::string valid = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string end = ".";
	std::string sucess = "All letters present";
	std::string failure = "Invalid line";
	std::string missing = "Missing letters: ";

	
	
}

int main(){
	alphabet(grab_letter());
}