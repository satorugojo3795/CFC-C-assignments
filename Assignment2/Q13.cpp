#include<iostream>
#include<vector>
using namespace std;
void q13(vector<int>arr)
{   
    int high=arr.size()-1;
    for(int i=0;i<arr.size()/2;i++)
    {
        arr[i]=arr[i]+arr[high];
        arr[high]=arr[i]-arr[high];
        arr[i]=arr[i]-arr[high];
        high--;
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    vector<int>vec={3, 1, 11, 2, 9, 7, 4, 5, -1, 13, 6} ;
    q13(vec);
}
