#include <iostream>

using namespace std;

int main(){
    string inventory[3];
    inventory[0] = "Sword";
    inventory[1] = "Shields";
    inventory[2] = "Boots";

    string first = inventory[0];

    cout << "The first Item is: "<< first << "\n";

    string inventory2[]={"item 1", "item 2", "item 3"};

    cout << "Inventory address is " << inventory2 << "\n";

    cout << "Inventory items: #1 "<< inventory2[0] << "\n";
    cout << "Inventory items: #2 "<< inventory2[1] << "\n";
    cout << "Inventory items: #3 "<< inventory2[2] << "\n";



    
 }