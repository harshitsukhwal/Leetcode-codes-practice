#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    string s ="abccbaacz";
    unordered_map <char, int>mp;
    

    for (int i = 0 ; i<s.size() ; i++)
    {
        if (mp.find(s[i]) == mp.end())
        {
            mp[s[i]]=i;
        }
        else{
            cout<<s[i];
            
            break;
        }
    }
    
    
}