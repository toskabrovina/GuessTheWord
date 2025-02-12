#include <iostream>
#include <string>

using namespace std;

void showProgress(int attemptsLeft, string guessedWord) {
    cout << "\nAttempts left: " << attemptsLeft << endl;
    cout << "Current word state: " << guessedWord << endl;
}

bool checkLetter(char guess, string word, string &guessedWord) {
    bool found = false;
    for (size_t i = 0; i < word.length(); i++) {
        if (word[i] == guess && guessedWord[i] == '_') {
            guessedWord[i] = guess;
            found = true;
        }
    }
    return found;
}


int main() {
    int attempts = 7;  // Numri i tentativave të lejuara
    string word = "PROGRAM";  // Fjala për t'u gjetur
    string guessedWord = "_______";  // Forma e fjalës me hapësira

    cout << "Welcome to Guess The Word!\n";

    while (attempts > 0) {
        showProgress(attempts, guessedWord);

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;
        guess = toupper(guess); // Konverto në uppercase për përputhshmëri

        if (checkLetter(guess, word, guessedWord)) {
            cout << "Correct!\n";
        } else {
            cout << "Wrong guess! Try again.\n";
            attempts--;
        }

                if (guessedWord == word) {
            cout << "\nCongratulations! You guessed the word: " << word << endl;
            break;
        }
    }



    if (attempts == 0) {
        cout << "\nGame Over! The word was: " << word << endl;
    }

    return 0;
}
