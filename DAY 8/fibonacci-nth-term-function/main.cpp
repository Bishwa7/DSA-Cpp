#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    int a=0,b=1;
    int ans=0;
    for(int i=1;i<=n-2;i++)
    {
        ans=a+b;
        a=b;
        b=ans;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<"Fibonacci (Nth term) = "<<Fibonacci(n)<<endl;

    return 0;
}