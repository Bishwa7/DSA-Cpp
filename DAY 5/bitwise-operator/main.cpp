#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    
    cout<< "a & b = "<< (a&b) <<endl;     //AND
    cout<< "a | b = "<< (a|b) <<endl;     //OR
    cout<< " ~a = "<< ~a <<endl;          //NOT
    cout<< "a ^ b = "<< (a^b) <<endl;     //XOR
    
    
    cout<< (17>>1) <<endl;         //Left Shift
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;         //Right Shift
    cout<< (19<<2) <<endl;

    return 0;
}
