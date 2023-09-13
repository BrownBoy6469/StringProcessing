#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main() {
    string sentence = "";
    cout << "Please enter the sentence: ";
    getline(cin, sentence);

    string word = "";
    cout << "Please enter the filter word: ";
    cin >> word;

    string filter = "";
    for(int i = 0; i < word.size(); i++) {
        filter += '#';
    }

    int index = 0;
    while((index = sentence.find(word)) != string::npos) { 
        sentence.replace(index, word.length(), filter); 
    }
    cout << "Filtered sentence: " << sentence << endl;

    return 0;
}
