#include<bits/stdc++.h>
using namespace std;
//code is right problem with auto can use for loop instead

class Solution {
public:
    vector<int> givefreq(string s)
    {
        vector<int> freq(26,0);
        for(int i = 0;i<s.length();i++)
        {
            freq[s[i]-'a']++;
        }
        return freq;
    }

    vector<string> wordSubsets(vector<string> &word1, vector<string > &word2)
    {
        vector<string> ans;
        vector<int> max_freqw2(26,0);
        
        for(auto x: words2)
        {
            vector<int> freq= givefreq(x);
            for(int i=0;i<26;i++)
            {
                max_freqw2[i]=max(freq[i],max_freqw2[i]);

            }
        }
        for(auto x: word1)
        {
            vector<int> freq= givefreq(x);
            bool flag = true;
            for(int i = 0 ; i<26;i++)
            {
                if(freq[i]< max_freqw2[i])
                {
                    flag =false;
                    break;

                }
            }
            if(flag)
            {
                ans.push_back(x);
            }

        }
        return ans;
    }



};