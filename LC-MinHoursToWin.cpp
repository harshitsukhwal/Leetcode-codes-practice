#include<bits/stdc++.h>
using namespace std;
int main()

{
    int initialenergy = 5, initialExperience = 3; int energy[] = {1,4,3,2}, experience[] = {2,6,3,1};
    int count=0;
    for(int i = 0 ; i<4;i++)
    {
        if(initialenergy>energy[i]){
            initialenergy-=energy[i];}
        else if(initialenergy<=energy[i])
        {
            int req =(energy[i]+1)-initialenergy;
            initialenergy+=req;
            initialenergy-=energy[i];
            count+=req;
        }
        if(initialExperience>experience[i]){
            initialExperience+=experience[i];}
        else if(initialExperience<=experience[i])
        {
            int req =(experience[i]+1)-initialExperience;
            initialExperience+=req;
            count+=req;
            initialExperience+=experience[i];

        }
    }
    cout<<count;
}