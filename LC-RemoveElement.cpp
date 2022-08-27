#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,2,2,4,5,2,2,6};
    int val=2;
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int i= 0,j=n;
    while(i<j)
    {
        if(arr[i]==val)
        {
            arr[i]=arr[j-1];
            j--;
        }
        else 
            i++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}