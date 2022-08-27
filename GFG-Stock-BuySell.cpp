#include<bits/stdc++.h>
using namespace std;

int stonk(int arr[], int n)
{
    int profit = 0;
    int flag =0;
    int bp;

    for(int i = 0 ; i< n-1; i++)
    {
        if(arr[i]< arr[i+1])
        {
            if(n==2)
                {bp = arr[0];}
            if(i== n - 2)
            {
                profit += arr[i+1] - bp;
            }
            else if(n>2)
            {
                if (flag == 0)
                {
                    bp=arr[i];
                    flag=1;
                }
            }
        }
        if(arr[i]>arr[i+1])
        {
            if (flag==1)
            {
                profit+=arr[i]-bp;
                flag=0;

            }
        }
        }
    
    return profit;
}
int main()
{
    int arr[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Return profit: "<<stonk(arr,n);
    return 0;
}