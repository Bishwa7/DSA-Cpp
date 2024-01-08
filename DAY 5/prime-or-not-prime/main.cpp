#include <iostream>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int n;
    cin>>n;
    
    bool isPrime=1;
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            //cout<<"Not Prime"<<endl;
            isPrime=0;
            break;
        }
    }
    
    if(isPrime==0)
    {
        cout<<"Not Prime"<<endl;
    }
    else
    {
        cout<<"Prime"<<endl;
    }
    

    return 0;
}
