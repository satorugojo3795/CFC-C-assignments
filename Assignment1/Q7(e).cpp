#include<iostream>
using namespace std;
int factorial(int n)
{
    int p=1;
    for(int i=n;i>=1;i--)
    {
        p=p*i;
    }
    return p;
}
int combination(int n,int r)
{
    float a,b,c,d,p;
    c=n-r;
    a=factorial(n);
    b=factorial(r);
    d=factorial(c);
    p=a/(b*d);
    return p;
}
void pattern(int n)
{
    int id=0;
    int nst=0;
    while(id<=n)
    {
        int cst=0;
        while(cst<=nst)
        {
            int x=0;
            x=combination(nst,cst);
            cout<<x;
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