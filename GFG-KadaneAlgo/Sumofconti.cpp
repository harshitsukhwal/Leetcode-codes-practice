#include<bits/stdc++.h>
#include<climits>
using namespace std;

int sumsub(int arr[], int size)
{
    int max_now=0;
    int max_yet=INT_MIN;
    for(int i=0; i<size; i++)
    {
        max_now=max_now+arr[i];
        
        if(max_yet < max_now)
        {
            max_yet=max_now;
        }

        if(max_now <0)
        {
            max_now=0;
        }

    }
    return max_yet;

}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_sum = sumsub(arr, n);
    cout<<"Maximum contiguous sum is " << max_sum;
    return 0;
}