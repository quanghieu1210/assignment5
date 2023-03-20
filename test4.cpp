#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Class for holding data for a trivia question
class Question {
private:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int correctOption;
public:
    // Constructor
    Question(string q, string o1, string o2, string o3, string o4, int c) {
        question = q;
        option1 = o1;
        option2 = o2;
        option3 = o3;
        option4 = o4;
        correctOption = c;
    }
    
    // Accessor functions
    string getQuestion() const {
        return question;
    }
    
    string getOption1() const {
        return option1;
    }
    
    string getOption2() const {
        return option2;
    }
    
    string getOption3() const {
        return option3;
    }
    
    string getOption4() const {
        return option4;
    }
    
    int getCorrectOption() const {
        return correctOption;
    }
};

int main() {
    // Seed the random number generator
    srand(time(0));

    // Create an array of 10 Question objects
    Question questions[10] = {
        Question("What is the capital of France?", "London", "Paris", "Berlin", "Madrid", 2),
        Question("What is the highest mountain in the world?", "K2", "Mount Everest", "Kangchenjunga", "Lhotse", 2),
        Question("What is the largest organ in the human body?", "Brain", "Heart", "Liver", "Skin", 4),
        Question("What is the smallest country in the world?", "Vatican City", "Monaco", "Nauru", "San Marino", 1),
        Question("What is the largest animal in the world?", "Elephant", "Blue whale", "Giraffe", "Hippopotamus", 2),
        Question("What is the currency of Japan?", "Yen", "Won", "Dollar", "Euro", 1),
        Question("Who invented the telephone?", "Thomas Edison", "Alexander Graham Bell", "Nikola Tesla", "Albert Einstein", 2),
        Question("What is the smallest planet in our solar system?", "Mercury", "Venus", "Mars", "Pluto", 1),
        Question("What is the largest desert in the world?", "Sahara", "Gobi", "Atacama", "Antarctica", 1),
        Question("What is the most widely spoken language in the world?", "English", "Mandarin", "Spanish", "Hindi", 2)
    };

    // Initialize variables
    int player1Score = 0;
    int player2Score = 0;
    int playerTurn = 1;

    // Loop through each player's turn
    for (int i = 0; i < 2; i++) {
        cout << "Player " << playerTurn << "'s turn:\n";

        // Loop through each question
        for (int j = 0; j < 5; j++) {
            // Randomly choose a question
            int questionIndex = rand() % 10;

            // Display the question and options
            cout << "\nQuestion " << j + 1 << ": " << questions[questionIndex].getQuestion() << endl;
           
        }
    }
}