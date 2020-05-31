#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    bool isGameRunning = true;
    int xPos = 0;
    int endPos = 10;
    while (isGameRunning) {
        xPos +=1;
        cout << xPos << "\n";
        if (xPos >= endPos) {
            isGameRunning = false;
        }
    }
    cout << "Game Over! \n";


    
 }