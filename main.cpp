#include <iostream>

using namespace std;

int main(){
 
    int someInt = 1;
    int *ptr = &someInt;
    
    cout << "This is the memory Address of " << ptr << "\n";
    cout << "And this is the value "<< *ptr << "\n";
 
 }