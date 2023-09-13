#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main() {
    string oldPassword = "";
    string newPassword = "";
    cout << "Please enter your text input: ";
    cin >> oldPassword;

    for(int i = 0; i < oldPassword.size(); i++) {
        if(oldPassword[i] == 'a') {
            newPassword += '@';
        }
        else if(oldPassword[i] == 'e') {
            newPassword += '3';
        }
        else if(oldPassword[i] == 'i') {
            newPassword += '!';
        }
        else if(oldPassword[i] == 'o') {
            newPassword += '0';
        }
        else if(oldPassword[i] == 'u') {
            newPassword += '^';
        }
        else {
            newPassword += oldPassword[i];
        }
    }
    for(int i = oldPassword.size() - 1; i >= 0; i--) {
        if(oldPassword[i] == 'a') {
            newPassword += '@';
        }
        else if(oldPassword[i] == 'e') {
            newPassword += '3';
        }
        else if(oldPassword[i] == 'i') {
            newPassword += '!';
        }
        else if(oldPassword[i] == 'o') {
            newPassword += '0';
        }
        else if(oldPassword[i] == 'u') {
            newPassword += '^';
        }
        else {
            newPassword += oldPassword[i];
        }
    }
    cout << "input: " << oldPassword << endl;
    cout << "output: " << newPassword << endl; 
    return 0;
}
