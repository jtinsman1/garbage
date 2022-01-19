#include "iostream"
#include "cmath"

int main() {
    
    bool gameIsRunning = true;
    std::string userInput;

    while(gameIsRunning) {
        std::cout << "say somthing: ";
        std::cin >> userInput;
        if(userInput == "quit"){
            std::cout << "exiting game loop" << std::endl << "good bye" << std::endl;
            gameIsRunning = false; 
        }else {
            std::cout << "you said: " << userInput << std::endl << std::endl;
        }
    }
}