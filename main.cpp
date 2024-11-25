#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isPasswordValid(const string& password) {
    if (password.length() < 8) {
        cout << "Password must be at least 8 characters long." << endl;
        return false;
    }

    bool hasUpper = false, hasLower = false, hasDigit = false;

    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        if (islower(ch)) hasLower = true;
        if (isdigit(ch)) hasDigit = true;
    }

    if (!hasUpper) {
        cout << "Password must contain at least one uppercase letter." << endl;
        return false;
    }
    if (!hasLower) {
        cout << "Password must contain at least one lowercase letter." << endl;
        return false;
    }
    if (!hasDigit) {
        cout << "Password must contain at least one digit." << endl;
        return false;
    }

    return true;
}

int main() {
    string password;

    cout << "Enter your password: ";
    cin >> password;

    if (isPasswordValid(password)) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is invalid." << endl;
    }

    return 0;
}

