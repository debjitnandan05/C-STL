#include <bits/stdc++.h>
#include <string>
#define long long long int

using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (int it = 0; it < t; it++)
    {
        int n,m;
        cin>>n>>m;
        int matrix[n][m],row,col,maxim=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>matrix[i][j];
                if(matrix[i][j]>maxim){
                    maxim = matrix[i][j];
                    row = max(i+1,n-i);
                    col = max(j+1,m-j);
                }
            }
        }
        int area = row*col;
        cout<<area<<'\n';
    }
    return 0;
}