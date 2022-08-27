#include<bits/stdc++.h>
using namespace std;
int main()

{
    int arr[] = {1,2,3};
    int k =3;

    vector<int> vect;
    vect.push_back(1);

    for(int i = 1 ; i< 4 ; i++)
        for (int j= i;j<4;j++)
        {
            if(vect.size()!=k)
            {
                j%vect[vect.size()-1]==0;
                vect.push_back(j);
            }


        }

}
