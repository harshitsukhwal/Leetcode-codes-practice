#include<bits/stdc++.h>
using namespace std;

void missing(int arr[], int n)
{
    int total = ((n+1)*(n+2))/2;
    int sum =0;
    for(int i =0; i<n; i++)
    {
        sum += arr[i];
    }
    int remaining = total -sum;
    cout<<endl<<"Remaining : "<<remaining;


}

int main()
{
    int arr[] ={1, 3, 2, 4, 5, 7, 10, 8, 9};
    missing(arr, sizeof(arr)/sizeof(arr[0]));
    
}