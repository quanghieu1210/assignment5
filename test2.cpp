#include <iostream>
#include <cstdlib> // for rand and srand functions
#include <ctime> // for time function
using namespace std;

class Coin {
private:
    string sideUp;

public:
    // Default constructor
    Coin() {
        // Use the time function to seed the random number generator
        srand(time(0));
        // Randomly determine the initial side of the coin
        int randomNum = rand() % 2;
        if (randomNum == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }

    // Simulates the tossing of the coin and updates sideUp accordingly
    void toss() {
        int randomNum = rand() % 2;
        if (randomNum == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }

    // Returns the value of sideUp
    string getSideUp() const {
        return sideUp;
    }
};

int main() {
    Coin c;
    cout << "The initial side of the coin is: " << c.getSideUp() << endl;

    int headsCount = 0, tailsCount = 0;
    for (int i = 0; i < 20; i++) {
        c.toss();
        cout << "Toss " << (i+1) << " - " << c.getSideUp() << endl;
        if (c.getSideUp() == "heads") {
            headsCount++;
        }
        else {
            tailsCount++;
        }
    }

    cout << "Number of times heads was facing up: " << headsCount << endl;
    cout << "Number of times tails was facing up: " << tailsCount << endl;

    return 0;
}
