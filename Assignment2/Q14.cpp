#include<iostream>
#include<vector>
using namespace std;
void q14(vector<int>arr,int target)
{   
    for(int i=0;i<arr.size()-1;i++)
    {   
        int x=i;
        for(int j=i+1;j<arr.size();j++)
        {   
            int sum=0;
            sum=arr[x]+arr[j];
            if(sum==target)
            {
                cout<<arr[x];
                cout<<arr[j]<<endl;
            }
        }
    }
}
int main()
{
    int n;
    vector<int>vec={3, 1, 11, 2, 9, 7, 4, 5, -1, 13, 6};
    cin>>n;
    q14(vec,n);
}
