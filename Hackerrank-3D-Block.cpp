#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    cout<<"Enter the length and breadth :";
    int l,b; cin>>l>>b;
    int arr[l][b];
    for(int i = 0 ; i < l ; i++)
    {   for(int j= 0 ; j<b; j++){
            cin>>arr[i][j];}
    }
    
    
    int res = 2*(l*b);

    for (int j = 0 ; j< b;j++)  //left and right side area
    {
        res += arr[0][j];
        res += arr[l-1][j];
    }

    for(int j= 0 ;j< b;j++) //area lr of bars
    {
        for (int i = 0 ; i< l-1; i++)
        {
            if(abs(arr[i][j]-arr[i+1][j])!= 0)
            {
                res += abs(arr[i][j]-arr[i+1][j]);
            }
        }
    }

    for(int i =0; i<l;i++) //area fb of bars
    {
        for(int j=0; j<b-1; j++)
        {
            if(abs(arr[i][j]- arr[i][j+1])!=0)
            {res +=abs(arr[i][j]- arr[i][j+1]); }
        }
    }

    for(int i =0;i<l;i++) //area front and back
    {
        res+=arr[i][0];
        res+=arr[i][b-1];
    }
    cout<<res;



}