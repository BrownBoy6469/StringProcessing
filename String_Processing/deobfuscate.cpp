#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main() {
    string oldSentence = "";
    string deobfuscation = "";
    string newSentence = "";

    cout << "Please enter obfuscated sentence: ";
    cin >> oldSentence;
    cout << endl;
    
    cout << "Please enter deobfuscation details: ";
    cin >> deobfuscation;
    cout << endl;

    int reference = 0;
    for(int i = 0; i < deobfuscation.size(); i++) {
        reference += deobfuscation.at(i) - 48;
        newSentence.insert(reference," ");
        reference++;
    }
    cout << "Deobfuscated sentence: " << newSentence << endl;
    return 0;
}
