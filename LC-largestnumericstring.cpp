#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="444947137";

    map<char,int> mp;
    for(int i = 0 ; i<s.size();i++)
    {
        if(s[i]!='0')
        {
        mp[s[i]]++;
        }
    }
    map<char,int> ::reverse_iterator itr;
    string ans="";
    for(itr=mp.rbegin(); itr!=mp.rend(); ++itr)
    {   
        //cout<<itr->second;
        
        int z=itr->second;
        while(z!=0)
        {
            cout<<itr->first;
            //ans+=to_string(itr->first);
            z--;
        }
        
        
    }
    //cout<<endl<<ans;
    return 0;
    

}