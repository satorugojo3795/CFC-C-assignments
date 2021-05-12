#include<iostream>
using namespace std;
void reverse(int n)
{
    int rem=0;
    int ans=0;
    while(n!=0)
    {
        rem=n%10;
        ans=10*ans+rem;
        n=n/10;
    }
    cout<<ans;
}
int main()
{
  int n;
  cout<<"enter a number";
  cin>>n;
  reverse(n);
}