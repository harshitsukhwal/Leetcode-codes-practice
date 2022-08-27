#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        
        int temp = k;
        
        if(k == 0){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
        }else if((n % (2*k)) == 0){              //important pattern
            for(int i = 1; i <= n; i++){
                cout << i + temp << " ";
                if(i % k == 0){
                    temp = temp * -1;
                }
            }        
        }else{
            cout << -1;
        }
        
        cout << endl;
    }
    return 0;
}




/*int main()
{
    int tt;
    cin>>tt;
    for(int a=0; a<tt;a++)
    {
    int n,k;
    cin>>n>>k;
    
    int arr[]= new int[n+2]; int result = new int[n];
    
    if(k==0 && n>0)
    {
        for(int i=0; i<n; i++)
        {
            result[i]=i+1;
        }
    }

    else if(k>0 && n<2*k || n%k !=0 || (n/k)%2 == 1)
    {
        cout<<"-1";

    }

    else{
        for(int i=0; i<=n;)
        {
            for(int j = 0 ; j<n ;j++)
            {
                int temp =arr[i];
                arr[i] =arr[i+k];
                arr[i+k]= temp;
            }
            i+=k;
            for(int  i = 0 ; i< n ;i++)
            {
                cout<<arr[i];
            }
        }
    }

    }

}
*/



//Not working
/*
int main()
{
    int t;
    cin>>t;
    for(int a = 0 ; a<t ;a++)
    {
        int n,k;
        cin>>n>>k;
        int arr[n], brr[n];
        for(int i = 0; i< n;i++)
        {
            arr[i]=i+1;
            
            brr[i]=i+1;
        }
        int kk=0;
        for(int i =0;i<n;i++)
        {
            int tt=0;
            for(int j=0;j<n;j++)
            {
                
                if(abs(brr[j]-arr[i])==k)
                {
                    arr[i]=j+1;
                    tt=1;
                    break;
                }
            }
            if(tt==0)
            {
                kk=1;
                break;
            }
        }
        if(kk==1)
        {
            cout<<"-1";
        }
        else
        {
        for(int i = 0 ; i< n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
    }

}
*/