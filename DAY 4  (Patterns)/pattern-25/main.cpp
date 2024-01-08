#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=1;
    
    for(int i=1; i<=n; i++)
    {
        for(int space=1; space<=n-i; space++)
        {
            cout<<" ";
        }
        
        for(int j=1; j<=i; j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }

    return 0;
}