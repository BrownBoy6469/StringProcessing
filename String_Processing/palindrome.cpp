#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main() {
    string word = "";
    int counter = 0;
    int i = 0;

    cout << "Please enter a sentence (end with 'quit'): ";
    while(word != "quit") {
        cin >> word;
        for(i = 0; i < word.size(); i++) {
            if(!(word[i] == word[word.size() - 1 - i])) {
                break;
            }
            if(i == word.size()) {
                counter++;
            }
        }
    }
    cout << "You have typed " << counter << " palidromes";

    return 0;
}
