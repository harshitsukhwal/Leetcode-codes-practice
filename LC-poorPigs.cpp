#include<bits/stdc++.h>
using namespace std;

int main()
{
    int buckets,mintodie, mintest;
    cin>>buckets>>mintodie>>mintest;

    
    int n;
    if(mintest%mintodie!=0) n=mintest/mintodie+1;
    else n=mintest/mintodie;    
    int pig=1;
    if(buckets==1){
        cout<<"1";
        return 0;
    }
    while(n!=0){
        pig++;
        if(buckets%2 ==0)
            buckets/=2;
        else    
            buckets= (buckets+1)/2;

        if(mintest==mintodie){
            break;
        }
        if(buckets==2)
            break;
        n--;
    }
    cout<<pig;
}