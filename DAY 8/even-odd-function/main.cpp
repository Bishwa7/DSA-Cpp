#include <iostream>
using namespace std;

bool isEven(int a)
{
    if(a&1)  //odd
    {
        return 0;
    }
    
    return 1; //even
}

int main()
{
    int num;
    cin>>num;
    
    if(isEven(num))
    {
        cout<<num<<" is even"<<endl;
    }
    else
    {
        cout<<num<<" is odd"<<endl;
    }
    

    return 0;
}