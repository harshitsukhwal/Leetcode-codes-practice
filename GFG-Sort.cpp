#include<bits/stdc++.h>
using namespace std;

int main()
{   
    
    vector<int>a2; a2.empty();
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

    for(int i=0;i<3;i++)
    {
        for(int j = 0 ; j< n ;j++)
        {
            if(arr[j]==i){
            a2.push_back(arr[j]);}
        }
    }
    cout<<endl;
    for (int i=0; i<n;i++)
    {
        cout<<a2[i]<<" ";
    }
    
}