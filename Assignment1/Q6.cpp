#include<iostream>
using namespace std;
void rev(int n)
{
    int rem=0;
    int ans=0;
    while(n!=0)
    {
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    cout<<ans;
}
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    rev(n);
}