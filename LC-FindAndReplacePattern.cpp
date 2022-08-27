

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
int n=words.size();
        vector<map<char,char> > m(n);
        
        for(int i =0 ; i<n; ++i){
          set<int>s ;
            for(int j=0;j<words[i].size();++j){
              if(s.find(pattern[j])==s.end()){
                  s.insert(pattern[j]);
                m[i][words[i][j]]=pattern[j];
            }
        }
        }
        vector<string> ans;
        for(int i=0;i<n;++i){
            string k=words[i];
            for(int j=0; j<words[i].size();++j){
                  words[i][j]=m[i][words[i][j]];
            }
            if(words[i]==pattern){
                ans.push_back(k);
            }
        }
        return ans;
    }
};



/*
int main()
{
    string word[6]= {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";
    map<char,char> mp;
    vector<string >v1;
    for(int i = 0;i<6 ;i++)
    {   int flag=1;
        map<char,char>:: iterator itr;
        string temp = word[i];
        for(int j = 0;j<temp.size()-1;j++)
        {
            if(mp.find(pattern[j])!=mp.end())
            {
                
                for(itr=mp.begin();itr != mp.end();itr++)
                    if(itr->first == pattern[j])
                        if(itr->second != temp[j])
                        {
                    
                        flag=0;
                        break;
                        }
                    
            }   
                
                
            else
                mp[pattern[j]]=temp[j];
                
        }
        
        if(flag==1)
            v1.push_back(word[i]);
        mp.clear();

    
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
    
    
}

*/