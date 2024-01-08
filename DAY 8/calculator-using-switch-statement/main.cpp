#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter digit one : ";
    cin>>a;
    //cout<<endl;
    cout<<"Enter digit two : ";
    cin>>b;
    //cout<<endl;
    char op;
    cout<<"Enter the operation (+,-,*,/,%) : ";
    cin>>op;
    
    
    switch(op)
    {
        case '+': cout<< a+b <<endl;
        break;
        case '-': cout<< a-b <<endl;
        break;
        case '*': cout<< a*b <<endl;
        break;
        case '/': cout<< a/b <<endl;
        break;
        case '%': cout<< a%b <<endl;
        break;
        default: cout<< "Enter valid details";
    }

    return 0;
}