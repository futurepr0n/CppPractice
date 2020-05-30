#include <iostream>

using namespace std;

int main(){
 
    int maxHealth = 100;
    int currentHealth = maxHealth;

    bool isGameOver = false;

    isGameOver = !isGameOver;

    currentHealth = currentHealth - 10;

    cout << "The current Health is: " << currentHealth << "\n";

    cout << "Now with %100 is equals = " << currentHealth % 100 << "\n";

    cout << "Now with % 80: " << currentHealth % 80 << "\n";

    cout << "The current Health is: " << currentHealth << "\n";
    currentHealth++;
    cout << "The current Health ++  is: " << currentHealth << "\n";

    currentHealth+=10;
    cout << "The current Health +=10  is: " << currentHealth << "\n";

    string playerName = "Mark";
    string welcome = "Welcome ";
    cout << welcome + playerName;



    

 }