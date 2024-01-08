#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int n;
    cin>>n;
    
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    
    for(int i=1;i<=n;i++)
    {
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }

    return 0;
}