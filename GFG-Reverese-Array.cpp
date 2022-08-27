#include<bits/stdc++.h>
using namespace std;

void reverse (int arr[], int n, int k)
{
    for (int i = 0 ;i<n; i+=k)
    {
        int left = i;
        int right = min(i+k-1, n-1);

        while(left<right)
        {
            swap(arr[left++], arr[right--]);

        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements: ";

    int arr[n];
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"Enter k value: "; cin>>k;
    reverse(arr, n, k);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}