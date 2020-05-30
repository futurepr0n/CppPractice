#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<string> inventory;

    inventory.push_back("Sword");
    inventory.push_back("Sheild");

    inventory.pop_back();
    int size = inventory.size();
    inventory.front();
    inventory.back();
    inventory.clear();

    cout << "What is the size " << size << "\n"; 



    
 }