#include<iostream>
using namespace std;
void octal(int n)
{
    int rem=0;
    int power=1;
    int ans=0;
    while(n!=0)
    {
        rem=n%8;
        ans=power*rem+ans;
        power=power*10;
        n=n/8;
    }
    cout<<ans;
}
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    octal(n);
}