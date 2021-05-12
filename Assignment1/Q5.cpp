#include<iostream>
using namespace std;
void count(int n)
{
    int rem=0;
    int i=0;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    cout<<i;
}
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    count(n);
}