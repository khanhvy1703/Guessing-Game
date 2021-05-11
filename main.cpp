// Compile with: g++ main.cpp -o prog
// Run with: ./prog
//
// Debug with: g++ -g -Wall -Werror main.cpp -o prog
// Run debug build with: gdb ./prog --tui

// Reference: http://www.cppforschool.com/assignment/library-functions-sol/guess-my-number.html#:~:text=In%20this%20game%20the%20computer,number%2C%20the%20game%20is%20over.

#include <iostream>
#include <array>

using namespace std;

int main(int argc, char* argv[]){
    int result[5];
    int rounds = 0;

    while (rounds < 5) {
        int random;
        int guess;
        int tries = 0;
        random = rand() % 10 + 1;
        cout << "Pick a number 1-10\n";

        while (guess != random) {
            cout << "Make a guess ";
            cin >> guess;
            tries++;
            
            if (guess > random) {
                cout << "No guess lower!\n";
            } else if (guess < random) {
                cout << "No guess higher!\n";
            } else {
                cout << "You got it!\n";
                cout << "===============\n";
                result[rounds] = tries;
                rounds++;
                tries = 0;
            }          
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << "Game " << i << " took you " << result[i] << " guesses\n";
    }

    return 0;
}
