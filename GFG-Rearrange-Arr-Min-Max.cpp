#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int temp[n];

    int small =0 , large =n-1;
    int flag = true;

    for(int i =0 ;i<n;i++)
    {
        if(flag)        //true
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
    
    flag = !flag;
    
    }
    for(int i =0 ;i<n ;i++)
    {
        arr[i] = temp[i];
    }

}
int main()
{
    cout<<"Enter the size of the array: ";int n; cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the array: ";
    for(int i = 0 ; i< n ;i++)
    {
        cin>>arr[i];
    }
    rearrange(arr,n);
    cout<<endl<<"Rearranged array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}