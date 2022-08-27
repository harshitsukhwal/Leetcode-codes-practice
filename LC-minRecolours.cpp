#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    string blocks = "WBBWWBBWBW";
    int k=7;
    int maxi=0;
        for(int i =0;i<=(blocks.size()-k);i++)
        {
            int count =0;
            for(int j=i;j<(k+i);j++)
            {
                if(blocks[j]=='B')
                {
                    count++;
                }
            }
            maxi=max(maxi,count);
        }
    cout<<(k-maxi)<<endl;
    return 0;
 }
    
