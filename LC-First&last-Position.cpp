#include<bits/stdc++.h>
using namespace std;

int first(vector<int>arr, int lo, int hi, int target)
{
    int res =-1;

    while(lo<=hi)
    {
        int mid  = hi -(lo +1) /2;
        if(arr[mid] == target)
        {
            res= mid;
            hi = mid-1;
        }
        else if (arr[mid]<target)
            lo =mid+1;
        else
            hi = mid -1;

    }
    return res;
}
int last(vector<int>arr, int lo, int hi, int target)
{
    int res =- 1;
    while (lo <= hi)
    {
        int mid = hi -( lo +1) / 2;
        if (arr[mid] == target)
        {
            res =mid;
            lo=mid+1;
        }
        else if (arr[mid]<target)
        {
            lo =mid+1;
        }
        else
        {
            hi =mid-1;

        }
    }
    return res;

}

    vector<int> searchRange(vector<int>&arr, int target) 
    {
        int lo=0;
        int hi = arr.size()-1;
        vector<int> ans(2);
        ans[0] = first(arr , lo, hi,  target);
        ans[1] = last(arr, lo, hi,target );
        return ans;



    }
