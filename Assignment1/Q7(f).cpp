#include<iostream>
using namespace std;
void pattern(int n)
{
    int id=1;
    int nst=1;
    int nsp=n-1;
    while(id<=2*n-1)
    {
        int csp=1;
        int cst=1;
        while(csp<=nsp)
        {
            cout<<" ";
            csp++;
        }
        while(cst<=nst)
        {
            cout<<"*";
            cst++;
        }
        cout<<endl;
        if(id<n)
        {
            nsp--;
            nst=nst+2;
        }
        else
        {
            nsp++;
            nst=nst-2;
        }
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