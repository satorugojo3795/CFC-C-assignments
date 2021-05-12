#include<iostream>
using namespace std;
void upperlower(char ch)
{
    if(ch>=65 && ch<=90)
    {
       cout<<"Uppercase";
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"Lowercase";
    }
    else
    {
        cout<<"character entered is not an alphabet";
    }
}
int main()
{
  char ch;
  cout<<"enter an alphabet";
  cin>>ch;
  upperlower(ch);
}