#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a;
    vector<int>vec;
    cout<<"enter size";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]%5==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}