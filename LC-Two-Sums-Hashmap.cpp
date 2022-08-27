#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
{   
    map<int, int>mp;
    for(int i=0; i<arr.size() ;i++){
        int req = target - arr[i];

        if(mp.find(req) != mp.end())
        {
            return{mp[req],i};
            
        }
        else
        {
            mp[arr[i]] = i;   
        }
    }
}
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    int target =10;
    twoSum(arr, target);
    return 0;
  

}

