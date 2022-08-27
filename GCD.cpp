#include<bits/stdc++.h>
using namespace std;
/*
//Euclidean Method

int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd (b % a , a);  
}

int main()
{
    int a,b;
    cin>>a>>b;  
    gcd(a,b);
    cout<<gcd(a,b);
    return 0;
}
*/

//Brute Force
int main()
{
    int a, b;
    cin>>a>>b;
    int result= min(a,b);
    while(result>0)
    {
        if(a%result ==0 && b%result ==0)
        {
            break;
        }
        else
        {
            result--;
        }
    }
    cout<<result;
return 0;

}