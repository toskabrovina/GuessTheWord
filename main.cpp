#include <iostream>
#include <string>

using namespace std;

void selectDifficulty() {
    int choice;
    cout << "Select Difficulty Level: \n";
    cout << "1. Easy\n";
    cout << "2. Medium\n";
    cout << "3. Hard\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Easy mode selected! You have 10 attempts.\n";
            break;
        case 2:
            cout << "Medium mode selected! You have 7 attempts.\n";
            break;
        case 3:
            cout << "Hard mode selected! You have 5 attempts.\n";
            break;
        default:
            cout << "Invalid choice! Defaulting to Medium mode.\n";
    }
}

int main() {
    cout << "Welcome to Guess The Word!\n";
    selectDifficulty();
    return 0;
}
