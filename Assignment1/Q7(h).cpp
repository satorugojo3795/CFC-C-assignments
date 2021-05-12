#include<iostream>
using namespace std;
void pattern(int n)
{
    int nst=n;
    int id=1;
    int nsp=-1;
    while(id<=2*n-1)
    {
        int cst=1;
        int csp=1;
        while(cst<=nst)
        {
            cout<<"*";
            cst++;
        }
        while(csp<=nsp)
        {
            cout<<" ";
            csp++;
        }
        if(id==1 || id==2*n-1)
        {
            cst=2;
        }
        else
        {
            cst=1;
        }
        while(cst<=nst)
        {
            cout<<"*";
            cst++;
        }
        cout<<endl;
        if(id<n)
        {
            nst--;
            nsp=nsp+2;
        }
        else
        {
            nst++;
            nsp=nsp-2;
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