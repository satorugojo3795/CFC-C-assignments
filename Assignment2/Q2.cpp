#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    char ch;
    cout<<"enter a character";
    cin>>ch;
    if(ch=='*')
    {
        cout<<a*b;
    }
    else if(ch=='+')
    {
        cout<<a+b;
    }
    else if(ch=='-')
    {
        cout<<a-b;
    }
    else if(ch=='/')
    {
        cout<<a/b;
    }
    else if(ch=='%')
    {
        cout<<a%b;
    }
    else
    {
        cout<<"wrong character entered";
    }
    return 0;
}