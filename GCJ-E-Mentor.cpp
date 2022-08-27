#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2000, 1500, 1900};
    long long int max=-111111111;
    vector<int> v1;
    int zz=0;
    for(int i = 0 ; i<3; i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j!=i)
            {
                if(arr[j]<=2*arr[i])
                {
                    long long int k=arr[j]-arr[i];
                    if(k>max)
                    {
                        zz=j;
                        max=k;
                    }

                }
            }
        }
        v1.push_back(arr[zz]);        
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }

}