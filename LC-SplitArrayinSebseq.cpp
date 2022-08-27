#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,3,4,4,5,5};
    map<int,int>mp;
    for(int i=0;i<8;i++)
    {
        mp[arr[i]]++;
    }
    //map<int ,int> :: iterator itr;
    //int z=3;
    //auto it =mp.begin();
    /*
    for(int i=0;i<3 && it != mp.end(); i++)
    {
        
        it->second -= 1;
        if(it->second==0)
        {
            mp.erase(it->first);
        }
        it++;
    }
    */
    
    map<int,int>::iterator x;
    int count=0,zero=0;
    for(x=mp.begin();x!=mp.end();x++)
    {   
        if(count==3)break;
        x->second-=1;
        if(x->second==0)
        {
            zero+=1;
        }
        count++;

    }
    /*for(x=mp.begin();x!=mp.end();x++)
    {
        cout<< x->first;
    }
    */

    if(mp.size()-zero>=3)
    {
        cout<<"TRue";
    }
    else    
        cout<<"false";
    
}