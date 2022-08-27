#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[] ={"flower","flew","flowing"};
    sort(begin(arr),end(arr));
    int n = sizeof(arr)/sizeof(arr[0]);
    string a = arr[0];
    string b =arr[n-1];
    string ans  = "";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[i])
        {
            ans = ans + a[i];
        }
        else
            break;
    }
        

    cout<<ans;
    return 0;



}