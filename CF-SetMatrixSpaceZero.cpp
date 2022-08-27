#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int> > ans;
    int matrix[][4]= {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int n=3,m=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                ans.push_back(make_pair(i,j));
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j= 0 ; j<n; j++)
        {
            matrix[ans[i].first][j]=0;
        }
        for(int j= 0 ; j<m; j++)
        {
            matrix[j][ans[i].second]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;

}