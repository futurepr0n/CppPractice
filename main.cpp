#include <iostream>

using namespace std;

int main(){
    bool isGameOver;
    isGameOver = false;
    isGameOver = true;
    bool isNotGameOver = isGameOver;
    isGameOver = false;
    isGameOver = 5 > 2;
    
    int currentHealth = 100;
    currentHealth = 50 - 2;

    float percentHealth = 0.45;
    double pi = 3.14159;

    cout << "Is Game Over? " << isGameOver <<"\nWhat is players CurrentHealth? "<< currentHealth  << "\nWhat about their Percent Health?" << percentHealth << "\nAnd what is pi? " << pi ;
}