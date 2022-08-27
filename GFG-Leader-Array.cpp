#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{  
    vector<int> largest;
    largest.empty();
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int flag=0;
    for (int i = 0 ; i< n-1; i++)
    {   flag=0;
        for(int j = i+1; j<n;j++)
        {
            if (arr[i]<=arr[j])
            {flag=1;
            break;}
        }
        if(flag==0)
        {
            largest.push_back(arr[i]);
        }
    }
    largest.push_back(arr[n-1]);
    for(int i=0;i<largest.size();i++)
    {
        cout<<largest[i]<<" ";
    }

}
