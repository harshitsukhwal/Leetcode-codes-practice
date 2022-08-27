// code requires corrections for map val comparison

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s ="abcfeacd";
    vector <string> words;
    words.push_back("a");
    words.push_back("bc");
    words.push_back("abc");
    words.push_back("aec");

    map<char,vector<int> >mp;
    for(int i =0 ; i<s.size() ;i++)
    {
        mp[s[i]].push_back(i);
    }
    map<char, vector<int> > ::iterator it;
    
    for(auto w : words)
    {
        
        
        int prev=-1;
        for(int j = 0 ; j<w.size(); w++)
        {
            vector <int> inVect = (*it).second;
            if(w[j]==(*it).first)
            {
                prev= inVect[0];


            }
            
            
        }
    }


    /*
    for (map<char, vector<int> > ::iterator it = mp.begin(); it != mp.end(); ++it) {

		cout << (*it).first << ": ";
        vector <int> inVect = (*it).second;
        for (int j=0; j<inVect.size(); j++){
           cout << inVect[j] << " ";
       }
       cout << endl;
	}
    */

return 0;
}