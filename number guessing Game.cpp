#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(static_cast<unsigned int>(time(0))); // seed random number generator
    int numberToGuess = rand() % 100 + 1; // generate a random number between 1 and 100
    int numberOfTries = 0;
    int guess;

    std::cout << "Welcome to the number guessing game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        numberOfTries++;

        if (guess > numberToGuess) {
            std::cout << "Too high! Guess lower.\n";
        } else if (guess < numberToGuess) {
            std::cout << "Too low! Guess higher.\n";
        }
    } while (guess != numberToGuess);

    std::cout << "Congratulations! You found the number in " << numberOfTries << " tries.\n";

    return 0;
}