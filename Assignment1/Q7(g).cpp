#include<iostream>
using namespace std;
void pattern(int n)
{
    int id=1;
    int nst=1;
    while(id<=2*n-1)
    {
        int nsp=2*n-2*nst;
        int csp=1;
        int cst=1;
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
        cst=1;
        while(cst<=nst)
        {
            cout<<"*";
            cst++;
        }
        cout<<endl;
        if(id<n)
        {
            nst++;
        }
        else
        {
            nst--;
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