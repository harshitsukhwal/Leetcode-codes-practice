//In this question no need to apply recursion do it by a loop.


#include<bits/stdc++.h>
using namespace std;

string csay(int z, string s,int n)
{   
    string nn="";
    if(z==n+1)                //base case
    {
        cout<<s;
        return s;
    }
    if(z==1){
        nn="1";
        return csay(z++,nn,n);
    }
    else if(z==2)
    {
        nn="11";
        return csay(z++,nn,n);
    }
    
    else
    {   
        int count =1;
       for(int i =0;i<s.size()-1;i++)
       {
        
        if(s[i]==s[i+1])
        {
            if(i==s.size()-2)
            {
                count++;
                nn+=to_string(count);
                nn+=to_string(s[i]);
            }
            else
                count++;
        }
        else{
            if(i==s.size()-2)
            {
                nn+=to_string(count);
                nn+=to_string(s[i]);
                nn =nn+"1"+to_string(s[i+1]);
                count=1;
            }
            else{
            nn+=to_string(count);
            nn+=to_string(s[i]);
            count=1;
            }
        }
       } 
    return csay(z++,nn,n);
    }
    

}
/*
string countAndSay(int n) {
        return csay(1,"",n);
    }
*/

int main()
{   
    csay(1,"",4);
    return 0;
}