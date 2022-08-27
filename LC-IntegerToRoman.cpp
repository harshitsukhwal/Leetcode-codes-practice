#include<bits/stdc++.h>
using namespace std;
//optimised (No need of times)
class Solution {
public:
    const int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const string rom[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string intToRoman(int N) {
        string ans = "";
        for (int i = 0; N; i++)
            while (N >= val[i]) ans += rom[i], N -= val[i];
        return ans;
    }
};


//Brute Force
/*
int main()
{
    int arr1[]={1,4,5,9,10,50,100,500,1000};
    string arr2[]={"I","IV","V","IX","X","L","C","D","M"};
    //vector<string>ans;
    string ans;
    int x=120; //target
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int rem=x;
    int i= n-1;
    while(i>=0)
    {   int times=0;
        if(rem ==0)
            break;
        if(rem==arr1[i])
            ans+=arr2[i];
        else if(rem>arr1[i])
        {
            times = rem/arr1[i];
            rem=rem%arr1[i];
            while(times!=0)
            {
                ans+=arr2[i];
                times--;
            }
            i--;
        }
        else{
            i--;
        }   
    }
    cout<<ans<<endl;

}
*/