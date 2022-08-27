#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    for(int i = 1 ; i< n ; i++)
    {
        int countL =0, countR=0;

        for(int j=0; j<i; j++)
        {countL+=arr[j];}

        for(int k=i+1; k<n; k++)
        {countR+=arr[k];}

        if(countL == countR)
        {   cout<<"Equilibrium Pt: "<<arr[i];
            break;}
    }
}