#include<iostream>
using namespace std;
void pattern(int n)
{
    int id=1;
    int nst=1;
    int nsp=n-1;
    while(id<=n)
    {
        int i=1;
        int csp=1;
        int cst=1;
        while(csp<=nsp)
        {
            cout<<" ";
            csp++;
        }
        while(cst<=nst)
        {
            if(cst<=(nst/2)+1)
            {
                cout<<cst;
                cst++;
            }
            else if(cst>(nst/2)+1)
            {
                cout<<cst-2*i;
                i++;
                cst++;
            }
        }
        cout<<endl;
        id++;
        nsp--;
        nst=nst+2;
    }
}
int main()
{
    int n;
    cout<<"enter number of rows";
    cin>>n;
    pattern(n);
}