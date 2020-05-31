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

class Player: public GameCharacter {
public:
    string name;
    vector<string> inventory;
    Player(string, int, int, int);
    void addItem(string);


}

Player::Player(string n, int h, int a, int d):GameCharacter(h,a,d){
    name = n;
}

void Player::addItem(string i){
    inventory.push_back(i);
}

int main(){
    

    Player p = Player("Mark", 120, 30, 20);
    p.addItem("Boots");
    
    GameCharacter gc = GameCharacter(100,20,10);
    cout << gc.currentHealth << "\n";
    gc.takeDamage(50);
    cout << gc.currentHealth << "\n";


 
 }

