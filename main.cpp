#include <iostream>
#include <string>

using namespace std;

void showProgress(int attemptsLeft, string guessedWord) {
    cout << "\nAttempts left: " << attemptsLeft << endl;
    cout << "Current word state: " << guessedWord << endl;
}

int main() {
    int attempts = 7;
    string word = "PROGRAM";
    string guessedWord = "_______"; // Fjalë e fshehur

    cout << "Welcome to Guess The Word!\n";

    while (attempts > 0) {
        showProgress(attempts, guessedWord);

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        bool found = false;
        for (size_t i = 0; i < word.length(); i++) {
            if (toupper(word[i]) == toupper(guess)) {
                guessedWord[i] = word[i];
                found = true;
            }
        }

        if (!found) {
            attempts--;
            cout << "Incorrect guess! Try again.\n";
        }

        if (guessedWord == word) {
            cout << "Congratulations! You guessed the word: " << word << endl;
            break;
        }
    }

    if (attempts == 0) {
        cout << "Game over! The word was: " << word << endl;
    }

    return 0;
}

