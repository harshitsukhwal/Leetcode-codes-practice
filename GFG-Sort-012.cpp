#include<bits/stdc++.h>
using namespace std;

void prints(int arr[], int s)
{
    for (int i=0; i<s ;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[],int s)
{
    int i,cnt1=0, cnt2=0 , cnt3=0 ;
    for( i=0;i<s; i++)
    {
        switch (arr[i])
        {
        case 0:
            cnt1++;
            break;
        case 1:
            cnt2++;
            break;
        case 2:
            cnt3++;
            break;
        }
    }
    i=0;

    while(cnt1>0)
    {
        arr[i++]=0;
        cnt1--;

    }
    while (cnt2 > 0) {
        arr[i++] = 1;
        cnt2--;
        
    }
    while (cnt3 > 0) {
        arr[i++] = 2;
        cnt3--;
    }
    prints(arr, s);
    
}
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(int);
  
    sort(arr, n);
  
    return 0;
}