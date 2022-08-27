#include<bits/stdc++.h>
using namespace std;
int main()

{
    vector<int>arr;
    for(int i= 0 ; i < 3 ; i++)
    {
        arr.push_back(i);

    }
    arr.erase(arr.begin());
    for(int i= 0 ; i < arr.size() ; i++)
    {
        cout<<arr[i];
    }
}