#include<iostream>
#include<vector>
using namespace std;
int prime(int n)
{   
    int l=0;
    if(n==1)
    {
        l=1;
    }
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                l=1;
                break;
            }
        }
    }
    return l;
}
int main()
{
    int n,a,x;
    int count=0;
    vector<float>vec;
    cout<<"enter size";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    for(int i=0;i<n;i++)
    {   
        x = prime(vec[i]);
        if(x==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}