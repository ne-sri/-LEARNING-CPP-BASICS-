#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

// Function prototypes
char getUserChoice();
char getComputerChoice();
void displayChoice(char choice);
void determineWinner(char player, char computer);
void playGame();

int main() {
    srand(time(0));
    playGame();
    return 0;
}

// Get user's choice
char getUserChoice() {
    char choice;
    
    do {
        cout << "\n========== ROCK PAPER SCISSORS ==========\n";
        cout << "Choose your move:\n";
        cout << "  'r' - Rock\n";
        cout << "  'p' - Paper\n";
        cout << "  's' - Scissors\n";
        cout << "  'q' - Quit\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        choice = tolower(choice);
        
        if (choice != 'r' && choice != 'p' && choice != 's' && choice != 'q') {
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 'r' && choice != 'p' && choice != 's' && choice != 'q');
    
    return choice;
}

// Get computer's choice (random)
char getComputerChoice() {
    int random = rand() % 3;
    
    switch (random) {
        case 0: return 'r';
        case 1: return 'p';
        case 2: return 's';
    }
    return 'r';
}

// Display choice
void displayChoice(char choice) {
    switch (choice) {
        case 'r':
            cout << "Rock";
            break;
        case 'p':
            cout << "Paper";
            break;
        case 's':
            cout << "Scissors";
            break;
    }
}

// Determine winner
void determineWinner(char player, char computer) {
    cout << "\nYou chose: ";
    displayChoice(player);
    cout << "\nComputer chose: ";
    displayChoice(computer);
    cout << "\n";
    
    // Check for tie
    if (player == computer) {
        cout << ">>> It's a TIE! <<<\n";
        return;
    }
    
    // Check all winning conditions for player
    if ((player == 'r' && computer == 's') ||
        (player == 'p' && computer == 'r') ||
        (player == 's' && computer == 'p')) {
        cout << ">>> YOU WIN! <<<\n";
    } else {
        cout << ">>> YOU LOSE! <<<\n";
    }
}

// Main game loop
void playGame() {
    char playerChoice;
    char computerChoice;
    int playerWins = 0;
    int computerWins = 0;
    int ties = 0;
    
    cout << "\n*** Welcome to Rock Paper Scissors Game! ***\n";
    
    while (true) {
        playerChoice = getUserChoice();
        
        if (playerChoice == 'q') {
            cout << "\n========== GAME OVER ==========\n";
            cout << "Final Score:\n";
            cout << "Your Wins: " << playerWins << "\n";
            cout << "Computer Wins: " << computerWins << "\n";
            cout << "Ties: " << ties << "\n";
            cout << "==============================\n";
            
            // Determine overall winner
            cout << "\n========== WHO IS THE WINNER? ==========\n";
            if (playerWins > computerWins) {
                cout << "🎉 U WIN YOUR MAJESTY! 🎉\n";
                cout << "Congratulations! You have defeated the computer!\n";
            } else if (computerWins > playerWins) {
                cout << "Computer Wins!\n";
                cout << "The computer has outsmarted you this time.\n";
            } else {
                cout << "It's a Tie!\n";
                cout << "You and the computer are evenly matched.\n";
            }
            cout << "========================================\n";
            break;
        }
        
        computerChoice = getComputerChoice();
        determineWinner(playerChoice, computerChoice);
        
        // Update score
        if (playerChoice == computerChoice) {
            ties++;
        } else if ((playerChoice == 'r' && computerChoice == 's') ||
                   (playerChoice == 'p' && computerChoice == 'r') ||
                   (playerChoice == 's' && computerChoice == 'p')) {
            playerWins++;
        } else {
            computerWins++;
        }
        
        cout << "\nCurrent Score - You: " << playerWins << " | Computer: " << computerWins << " | Ties: " << ties << "\n";
    }
}
