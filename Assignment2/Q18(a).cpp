#include<iostream>
#include<vector>
using namespace std;
void q18a(vector<int>&arr)
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i;j<arr.size();j=j+2)
        {
            for(int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }
        }
    }
    cout<<sum;
}
int main()
{
    int n;
    vector<int>vec={1,4,2,5,3};
    q18a(vec);
}
