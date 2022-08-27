#include<bits/stdc++.h>
using namespace std;

int minm(int ind, vector<int>arr)
{
    if(ind==0)
        return arr[0];
    int left=minm(ind-1,arr)+arr[ind-1];
    int right =INT_MAX;
    if(ind>1)
        right =minm(ind -2,arr)+ arr[ind-2];
    return min(left,right);
    
}

int main()
{
    int stairs[]= {1,100,1,1,1,100,1,1,100,1};
    vector<int> falana;
    for(int i=0;i<11;i++)
    {
        falana.push_back(stairs[i]);
    }
    long int xx=minm(11,falana);
    falana.erase(falana.begin());
    long int yy=minm(10,falana);
    if(xx>yy){
        cout<<yy;return yy;
        }
    else{
        cout<<xx;return xx;
        
    }}