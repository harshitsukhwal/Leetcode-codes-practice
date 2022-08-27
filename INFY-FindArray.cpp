#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(int arr1[], int arr2[], int h, int n,int sum)

{
    sum= h*arr2[n-1];
    
    if(arr1[n-1]>h*arr2[n-1])
    {
        return isSubsetSum(arr1,arr2,h,n-1 );
    }
    return isSubsetSum(arr1,arr2,h,n-1) || isSubsetSum(arr1,arr2,h,n-1)

}


int main()
{
    int arr1[3] ={8,7,1};
    int arr2[3] ={2,3,1};

    
}