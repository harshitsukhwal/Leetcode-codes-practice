#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {3,3,3,3,5,5,5,2,2,7};
    map<int,int> mp;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;

    }
    map<int,int> ::iterator it;
    vector<int>ans;
    for(it =mp.begin();it!= mp.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
        ans.push_back((*it).second);

    }
    sort(ans.begin(),ans.end(), greater<int>());
    int count= 0 ;
    int total=0;
    for(int i = 0 ; i < ans.size(); i ++)
    {
        total+=ans[i];
        count++;
        if(total>=n/2)
        {
            break;
        }
        

    }
    cout<<count;


}