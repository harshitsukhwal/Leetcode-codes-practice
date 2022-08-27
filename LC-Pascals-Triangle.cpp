#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};
int main()
{   
    int numRows =5;
    vector<vector <int > > r(numRows);
    generate();
}




/*
void pascal(vector< vector <int > > &vect, int n)
{
    vector<int>v1;
    
    
    for(int i =0; i<n; i++)
    {
        v1.empty();
        for(int j=0;j<=i;j++)
        {
            if(j==0 || i==j)
            {
                v1.push_back(1);
            }
            else
            {
                int z =vect[i-1][j-1]+vect[i-1][j];
                v1.push_back(z);

            }
        }
        vect.push_back(v1);
        

    }
    for(int i = 0 ; i<vect.size(); i++)
        {
            for(int j = 0; j<=i; j++)
            {
                cout<<vect[i][j]<<" ";

            }
            cout<<endl;

        }
}
int main()
{
    vector<vector<int> >vect;
    int n=5;
    pascal(vect,n);
    return 0;
}
*/