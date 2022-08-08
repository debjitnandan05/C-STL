//Topic - map used as frequency counter
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
int main() {

vec<int> v;
int n;cin>>n;
while (n--)
{
    int x;cin>>x;
    v.push_back(x);
}

map<int,int> mp;
int i;
mp[v[i]]=0;
for(i=0;i<n;i++){
    mp[v[i]]+=1;
}

for(i=0;i<n;i++){
    cout<<mp[v[i]]<<" ";
}


return 0;
}