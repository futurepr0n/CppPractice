#include <iostream>

using namespace std;

int main(){

    int currentHealth;
 
    int maxHealth = 100;
    currentHealth = maxHealth;
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


    currentHealth = 50;

    bool isTrue = currentHealth <= maxHealth;

    cout << "The max Health is: " << maxHealth << "\n";
    cout << "The current Health is: " << currentHealth << "\n";
    cout << "Now with isTrue = currentHealth <= maxHealth: " << isTrue << "\n";

    isTrue = currentHealth == maxHealth;
    cout << "Now with isTrue = currentHealth == maxHealth: " << isTrue << "\n";

    isTrue = currentHealth >= maxHealth;
    cout << "Now with isTrue = currentHealth >= maxHealth: " << isTrue << "\n";

    isTrue = currentHealth != maxHealth;
    cout << "Now with isTrue = currentHealth != maxHealth: " << isTrue << "\n";

    bool otherIsTrue = isTrue == true;
    cout << "otherIsTrue = isTrue == true: " << otherIsTrue << "\n";

    otherIsTrue = isTrue == false;
    cout << "otherIsTrue = isTrue == false: " << otherIsTrue << "\n";

    otherIsTrue = isTrue;
    cout << "otherIsTrue = isTrue: " << otherIsTrue << "\n";

    otherIsTrue = !isTrue;
    cout << "otherIsTrue = !isTrue " << otherIsTrue << "\n";

    string firstName = "Mark";
    string lastName = "Pereira";

    isTrue = firstName == lastName;

    cout << "Now with isTrue = firstName == lastName: " << isTrue << "\n";

    isTrue = firstName != lastName;
    cout << "Now with isTrue = firstName != lastName: " << isTrue << "\n";
    

    isTrue = currentHealth != maxHealth && firstName == lastName;
    cout << "isTrue = currentHealth != maxHealth && firstName == lastName: " << isTrue << "\n";

    isTrue = currentHealth != maxHealth && firstName != lastName;
    cout << "isTrue = currentHealth != maxHealth && firstName != lastName: " << isTrue << "\n";

    isTrue = currentHealth == maxHealth && firstName == lastName;
    cout << "isTrue = currentHealth == maxHealth && firstName == lastName: " << isTrue << "\n";

    isTrue = currentHealth == maxHealth && firstName != lastName;
    cout << "isTrue = currentHealth == maxHealth && firstName != lastName: " << isTrue << "\n";

 }