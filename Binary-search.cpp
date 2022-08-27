#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int l ,int r, int x)
{
    if (r>=1){
    int mid = r - (l+1) /2;
    
    if (arr[mid] ==x) 
        return mid;

    if (arr[mid]>x)
    {
        return binary (arr,l,mid-1,x);

    }
    return binary(arr,mid+1,r,x);
    
    
    }
    return -1;
}
int main()
{
    cout<<"Enter the size of the given array: ";
    int n; cin>>n;
    int arr[n];
    for (int i = 0 ; i< n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0 ; i< n; i++)
    {
        cout<<arr[i];
    }
    int x; cout<<"/n˜Enter the element you want to find : "; cin>>x;
    int result = binary(arr,0,n-1,x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
        
    return 0;



}