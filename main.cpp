#include <iostream>
#include <vector>

using namespace std;

class GameCharacter {
public:
    int maxHealth, currentHealth, attack, defence;
    GameCharacter(int, int, int);
    void takeDamage(int);

};

GameCharacter::GameCharacter(int h, int a, int d) {

    maxHealth = h;
    currentHealth = h;
    attack = a;
    defence = d;

}

void GameCharacter::takeDamage(int a){
    int damage = a - defence;

    if(damage < 0){
        damage = 0;
    }
    currentHealth -= damage;
}

int main(){
    
    GameCharacter gc = GameCharacter(100,20,10);
    cout << gc.currentHealth << "\n";
    gc.takeDamage(50);
    cout << gc.currentHealth << "\n";


 
 }

