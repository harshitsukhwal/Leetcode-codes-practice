#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            water = max(water, (j - i) * h);
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
         }
        return water;
    }



/*
int main()
{
    int arr[9]= {1,8,6,2,5,4,8,3,7};
    int l=0, r= 8 ,lm,rm;
    int volmaxl=0,volmaxr=0;

    int mid = r- (l+1)/2;
    while(l<mid && r>mid )
    {
        int voll=min(arr[l],arr[mid])*(mid-l);
            if(voll>volmaxl)
                lm=l;
                volmaxl=voll;
        l++;

        int volr=min(arr[r],arr[mid])*(r-mid);
            if(volr>volmaxr)
                rm=r;
                volmaxr=volr;
        r--;

    }
    cout<<(rm-lm)*min(arr[lm],arr[rm]);




}
*/