#include<bits/stdc++.h>
using namespace std;

int sum(int x[], int z)
{
    int result=0;
    for(int i = 0 ; i< z ;i++)
    {
        result+=x[i];
    }
    return result;
}
int target(int arr1[], int n, int arr2[], int m)
{
    int sum1 = sum(arr1, n);
    int sum2 = sum(arr2,m);

    if ((sum1-sum2)%2 != 0)
        return 0;

    else{
        return (sum1-sum2) /2;
    }

}
void swapvalues(int arr1[],int n, int arr2[], int m)
{
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    int target1 = target(arr1,n,arr2,m);
    if (target1 == 0)
        return;
    int i = 0 ; int j = 0 ;
    while (i<n && j<m)
    {
        int diff =arr1[i]-arr2[j];
        if (diff == target1) { 
            cout << arr1[i] << " " << arr2[j]; 
            return; 
        } 
        else if (diff < target1) 
            i++; 
        else
            j++;
    }

}
int main() 
{ 
    int arr1[] = { 4, 1, 2, 1, 1, 2 }; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
 
    int arr2[] = { 1, 6, 3, 3 }; 
    int m = sizeof(arr2) / sizeof(arr2[0]); 
 
    swapvalues(arr1, n, arr2, m); 
    return 0; 
} 