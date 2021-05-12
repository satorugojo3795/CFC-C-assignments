#include<iostream>
using namespace std;
void pattern(int n)
{
    int id=0;
    int nst=1;
    while(id<n)
    {
        int cst=1;
        while(cst<=nst)
        {
            cout<<"*";
            cst++;
        }
        cout<<endl;
        nst++;
        id++;
    }
}
int main()
{
    int n;
    cout<<"enter number of rows";
    cin>>n;
    pattern(n);
}