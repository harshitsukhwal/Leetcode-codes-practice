#include<bits/stdc++.h>
using namespace std;

int kelement(int arr1[],int arr2[], int m, int n, int k)
{   
    int sorted[m+n];
    int i = 0 ,j =0, d =0;
    while(i<m && j<n)
    {
        if (arr1[i] < arr2[j])
            sorted[d++] = arr1[i++];
        else
            sorted[d++] = arr2[j++];
    }
    while (i < m)
        sorted[d++] = arr1[i++];
    while (j < n)
        sorted[d++] = arr2[j++];
    return sorted[k - 1];

}
int main()
{
    int arr1[5] = {2, 3, 6, 7, 9};
    int arr2[4] = {1, 4, 8, 10};
    int k = 5;
    cout << kelement(arr1, arr2, 5, 4, k);
    return 0;    
}