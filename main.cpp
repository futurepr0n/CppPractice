#include <iostream>

using namespace std;

int main(){
 
    int someInt = 1;
    int *ptr = &someInt;
    
    cout << "This is the memory Address of ptr " << ptr << "\n";
    cout << "And this is the value *ptr "<< *ptr << "\n";

    int someOtherInt = someInt;

    cout << "This is the value of someOtherInt " << someOtherInt << " before we changed someInt's value \n";
    someInt = 5;

    cout << "This is the value of someOtherInt " << someOtherInt << " after we changed someInt's value to 5 \n";

    cout << "Now with pointers \n";
    cout <<"You can see that the reference to *ptr is changing with the address " << *ptr <<"\n";







 }