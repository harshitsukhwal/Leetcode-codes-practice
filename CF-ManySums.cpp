#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t][2];
    for(int i = 0 ;i<t;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        int totalnums =arr[i][1]-arr[i][0] + 1;
        cout<<2*totalnums<<endl;
    }
}