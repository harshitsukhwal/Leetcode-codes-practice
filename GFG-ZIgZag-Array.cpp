#include<bits/stdc++.h>
using namespace std;

void zigzag(int arr[], int n)
{
    bool flag =true;

    for(int i = 0 ;i<n; i++)
    {
        if (flag)       //Expected <
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        else            //Expected >
        {
            if (arr[i] < arr[i+1])
            {
            swap(arr[i],arr[i+1]);
            }
        }
    flag = !flag;
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
    cout<<endl;

    zigzag(arr , n);

    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}