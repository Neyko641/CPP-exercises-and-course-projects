#include <string>
#include <math.h>
#include <iostream>
#include <vector>

int main()
{
	std::string word = "the brown dog jumped over the lazy fox";
	std::string newWord = "";
	std::vector<std::string> wordsArray {};

    for (auto i = 0; i < word.size(); i++) {
        if (word[i] == ' ') {
            wordsArray.push_back(newWord);
            newWord = "";
        }
        else if (word[i + 1] == '\0') {
            newWord += word[i];
            wordsArray.push_back(newWord);
            newWord = "";
        }
        else {
            newWord += word[i];
        }
    }
	
	for (auto it = wordsArray.rbegin(); it != wordsArray.rend(); ++it) {
		newWord += *it + " ";
	}
	
	std::cout << "revSentence: " << newWord << '\n' << "Sentence: " << word;
}

