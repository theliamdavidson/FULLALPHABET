#include <iostream>
#include <string>
#include <algorithm>
using std::string;
std::string text;

string grab_letter() {
	std::cout << "Enter line to check (single '.' terminates)" << '\n';
	std::getline(std::cin, text);
	return text;
}

string alphabet(string grab_letter){
	std::string missing_letter = text;
	std::string valid = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string end = ".";
	std::string sucess = "All letters present";
	std::string failure = "Invalid line";
	std::string missing = "Missing letters: ";

	/*for (char ch = 'A'; ch <= 'Z'; ch++) {
		missing_letter += static_cast<char>(ch);
		
	}
	for (unsigned i = 0; i < valid.size(); i++) {
		for (unsigned j = 0; j < text.size(); j++) {
			if (text[j] == valid[i]) {
				text.erase(valid.begin(), valid[i], valid.end()), text.end());
				//valid.erase(valid[j]);
			}
		}
	}
	*/
	
	while (text != end) {
		std::string valid2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		for (int i = 0; i < text.size(); i++) {
			int j = i;
			while (j < text.size()) {
				int count = 0;
				if (valid2[j] == text[i]) {
				
				}
				else {
					count++;
					j++;
					if (count < 26) {
						return failure;
					}
				}
				//valid2[j] = text[i + 1];
				
			}
			valid2.pop_back();
			i++;
		}
		std::cout << "Original text: " << text << '\n' << missing << valid2 << '\n';
		std::getline(std::cin, text);
		
	}
	//else if (text == end) {
	//	return missing_letter;
	//}
	return missing_letter;

}

int main(){
	alphabet(grab_letter());
}