#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[]={"gin","zen","gig","msg"};
    string morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int a =0;
    vector<string>ans;
    int n=sizeof(s)/sizeof(s[0]);

    while(a!=n)
    {
        string ss;
        for(int i=0; i<s[a].size(); i++)
        {
        int x =(s[a][i]) - 97;
        ss+=morse[x];
        }
        if(find(ans.begin(),ans.end(),ss) == ans.end())
            ans.push_back(ss);
        a++;
    }
    cout<<ans.size();
    return 0;
}

