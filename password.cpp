#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

#define FILENAME "saved_password.txt"
#define KEY 0x5A

using namespace std;

void analyze_password(const string& password);
void encrypt_decrypt(string& data);
void save_password(const string& password);
string generate_random_password(int length);
bool is_password_cracked(const string& password, const string& guess);

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    string password;
    cout << "Enter your password: ";
    getline(cin, password);

    cout << "\n================ PASSWORD ANALYSIS ================\n";
    analyze_password(password);

    cout << "\n================ SAVING PASSWORD ==================\n";
    save_password(password);

    cout << "\nPress ENTER to start password cracking simulation...";
    cin.get();

    cout << "\n================ PASSWORD CRACKING ================\n";

    string guess;
    int attempts = 0;
    int length = password.length();

    while (!is_password_cracked(password, guess)) {
        guess = generate_random_password(length);
        attempts++;

        cout << "Attempt " << attempts << ": " << guess << endl;
    }

    cout << "\n================ RESULT ============================\n";
    cout << "Password cracked successfully!\n";
    cout << "Original Password: " << password << endl;
    cout << "Total Attempts: " << attempts << endl;

    return 0;
}
void analyze_password(const string& password) {
    bool has_lower = false, has_upper = false, has_digit = false, has_symbol = false;

    for (char ch : password) {
        if (islower(ch)) has_lower = true;
        else if (isupper(ch)) has_upper = true;
        else if (isdigit(ch)) has_digit = true;
        else has_symbol = true;
    }

    cout << "Password: " << password << endl;
    cout << "Lowercase Letters: " << (has_lower ? "Yes" : "No") << endl;
    cout << "Uppercase Letters: " << (has_upper ? "Yes" : "No") << endl;
    cout << "Digits:            " << (has_digit ? "Yes" : "No") << endl;
    cout << "Symbols:           " << (has_symbol ? "Yes" : "No") << endl;

    int score = has_lower + has_upper + has_digit + has_symbol;

    cout << "Password Strength: ";
    if (score <= 2)
        cout << "Weak\n";
    else if (score == 3)
        cout << "Medium\n";
    else
        cout << "Strong\n";
}
void encrypt_decrypt(string& data) {
    for (char& ch : data) {
        ch ^= KEY;
    }
}
void save_password(const string& password) {
    ofstream file(FILENAME, ios::app);
    if (!file) {
        cerr << "Error opening file.\n";
        return;
    }

    string encrypted = password;
    encrypt_decrypt(encrypted);

    file << encrypted << endl;
    file.close();

    cout << "Password encrypted and stored securely.\n";
}
string generate_random_password(int length) {
    static const char charset[] =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int max_index = sizeof(charset) - 1;

    string guess;
    for (int i = 0; i < length; i++) {
        guess += charset[rand() % max_index];
    }
    return guess;
}

bool is_password_cracked(const string& password, const string& guess) {
    return password == guess;
}
