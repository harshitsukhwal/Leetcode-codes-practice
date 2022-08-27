#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int e;cin>>e;
    map<int, int> mp;
    int power[n], bonus[n];
    for (int i = 0 ; i<n ; i++)
    {
        cin>>power[i];
    }
    for (int i = 0 ; i<n ; i++)
    {
        cin>>bonus[i];
    }
    for (int i = 0 ; i< n ;i ++)
    {
        mp[power[i]]=bonus[i];
    }
    map <int , int > :: iterator itr;
    int count =0;
    for (itr= mp.begin(); itr != mp.end(); ++itr)
    {
        if(e >= itr->first)
        {
            count++;
            e+= itr->second;
        }
        else{
            break;
        }

    }
    cout<<count;
    return 0;
}