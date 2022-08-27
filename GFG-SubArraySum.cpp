#include<bits/stdc++.h>
using namespace std;

int arraysum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;
    for (int i = 1 ; i <= n ; i++)
    {
        while(curr_sum > sum && start < i-1){
            curr_sum = curr_sum - arr[start];
            start++;
        }

        if(curr_sum == sum){
            cout<<"Sum found between indexes"
            <<start<<"and"<<i-1;
            return 1;
        }

        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
    cout << "No subarray found";
    return 0;
}
int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    arraysum(arr, n, sum);
    return 0;
}

/*
void arraysum (int arr[], int z, int n)
{

    
    for(int i = 0 ;i<n-1; i++)
    {
        int sum=arr[i];
        for (int j=i+1; j<n; j++)
        {
            sum += arr[j];
            if (sum==z){
                cout<<"Sum found between: "<<i<<" "<<j;
                break;}
            if (i==n-1)
            {
                cout<<"not Found";
                break;
            }
        }
        
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int z = 23;
    int n = sizeof(arr)/sizeof(arr[0]);
    arraysum(arr, z, n);
    return 0;
}
*/
