#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;int kk=1; cin>>t; int n; cin>>n;
    int nums[n];
    for(int i =0; i<n; i++)
    {
        cin>>nums[i];
    }
    for (int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+ nums[j] == t)
            {
                cout<<i<<" "<<j<<" ";
                break;
                kk=0;
            }
        }
        if(kk==0)
        {
            break;
        }
    }

}