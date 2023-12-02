#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;


void Start(const string& _number);

void Generate_number() {
    cout << "######################################################\n";
    cout << "#    The computer generated a three-digit number.    #\n";
    cout << "#    You must guess it. After entering each number,  #\n";
    cout << "#    you will be told how many numbers are guessed   #\n";
    cout << "#    and how many of them are in their places.       #\n";
    cout << "######################################################\n\n";

    srand(static_cast<unsigned int>(time(nullptr)));
    int randomNumber = rand() % 1000;

    string randomNumberStr = to_string(randomNumber);

    Start(randomNumberStr);
}

void Start(const string& _number) {
    short int number_of_attempts = 10;
    string guess;
    string result;
    do {
        cout << "Try to guess number: " << endl;
        cin >> guess;

        if (_number.find(guess) != string::npos) {
            cout << "You're right, there is such a number! " << endl;
            result += guess; // Concatenation
            cout << "Correct numbers:" << result << endl;
        }
        else {
            cout << "You're not right, there is no such a number! " << endl;
            number_of_attempts--;
            cout << "Count of attempts: " << number_of_attempts << endl;
        }
    } while (number_of_attempts > 0 && result != _number);

    if (result == _number) { cout << "You win!" << endl; }
    else if (number_of_attempts == 0) { cout << "You lose! Do you want to start a new game? y/n" << endl; }

    char y_n;
    cin >> y_n;
    if (y_n == 'y') { Generate_number(); }
    else { cout << "Game Over" << endl; }
}

int main() {
    Generate_number();
    return 0;
}
