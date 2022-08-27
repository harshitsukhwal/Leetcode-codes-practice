#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "444947137";
    map<char,int, greater<int> >mp;
    for(int i=0;i<s.length();i++)
    {   if(s[i]!=0)
            mp[s[i]]++;
    }
    map<char,int>::iterator itr;
    bool val=false;
    string cent="";
    string one="",two="";
    vector<char>chars;
    vector<int>ints;
    for(itr=mp.begin(); itr!=mp.end(); ++itr)
    {
        chars.push_back(itr->first);
        ints.push_back(itr->second);

    }
    bool val=false;
    for(int i=0;i<chars.size();i++)
    {
        if(ints[i]%2!=0)
        {
            if(val==false)
            {
                val=true;
                cent += chars[i];
                ints[i]--;

            }
            else
            {
                ints[i]--;
            }
        }
        //if(ints[i]==0){}
    }
    for(int i =0;i<chars.size();i++)
    {
        if(ints[i]!=0 && ints[i]!=1)
        {
            while(ints[i]/2!=0){
            one+=chars[i];
            two.insert(0,chars[i]);
            
        }
        }
    }



    /*
    for(itr=mp.begin(); itr!=mp.end(); ++itr)
    {
        if((itr->second)%2 != 0)
        {
            if(val==false){
                val=true;
                cent+=(itr->first);
                (itr->second)--;
            }
            else
            {
                (itr->second)--;
            }
        }
        if(itr->second ==0)
        {
            mp.erase(itr->first);
        }
    }
    for(itr=mp.begin(); itr!=mp.end(); ++itr)
    {
        cout<<itr->first;
    }
    */
    return 0;

}