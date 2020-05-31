#include <iostream>
#include <vector>

using namespace std;

 int takeDamage (int attack, int defence){
     int damage = attack - defence;
     if (damage < 0){
         damage = 0;
     }
    return damage;
 }

int main(){
    
    int damage = takeDamage(10,5);
    cout << damage;
    
 
 }

