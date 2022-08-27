#include<bits/stdc++.h>
using namespace std;

int main()
{
    string suits[5]= {"a","a","a","a","a"};
    int ranks[5]= {1,2,3,4,5};
    int n=5;
    int i=0,flag1=1,flag2 =0, flag3=0;

    while(i<n-1)
    {
       if( flag1==1 && suits[i]==suits[i+1] )
       {
        i++;
       }
       else if(suits[i] != suits[i+1])
       {
        flag1=0;
        break;
       }
    }
    if(flag1==0)
    {
        

    }
    if(flag1==1)
    {
        cout<<"Flush";

    }
    else if(flag3==1)
    {cout<<"Three";}
    else if(flag2 ==1)
    {
        cout<<"twos";
    }
    else{cout<<"high";}
}