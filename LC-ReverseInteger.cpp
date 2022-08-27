#include<bits/stdc++.h>
using namespace std;

//optimised code to check if the result is in the range of INT_MAX  and  INT_MIN
int main()
{
    int x;
    cin>>x;
    int res =0;
    while(x!=0)
    {
        if (res>INT_MAX/10 || res<INT_MIN/10)    //10 is divided because furthe in else case res will be multiplied by the 10(*10)
        {
            cout<<"no";
            return 0;
        }
        else{
            res= res*10 + x%10;
            x /= 10;
        }
    }
    cout<<res;
    return res;

}








//below is just to check if the number are reversed
/*
nt main()
{
    int x = -230;
    int sign=1;
    if(x<0)
        sign=-1;
    string y = to_string(x);
    int i=0 ,j=y.size()-1;
    
    

    while(i<j)
    {
        char temp;
        temp =y[i];
        y[i]=y[j];
        y[j]=temp;
        i++;j--;
    }
    cout<<stoi(y)*sign;



    return 0;
}

*/