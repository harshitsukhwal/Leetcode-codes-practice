#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums[]= {0,0,1,1,1,2,2,3,3,4};
    int i=0, j =1;
    int n=sizeof(nums)/sizeof(nums[0]);
    int count=1;
    while(j<n-1)
    {
    if(nums[j]==nums[j+1]||nums[j+1]==nums[i])
            j++;
    else
    {
    swap(nums[i+1],nums[j+1]);
    i++;
    j++;
    
    count++;
    }
    }
    for(int i=0; i<n;i++)
    {
        cout<<nums[i];
    }
    cout<<endl<<count;


}