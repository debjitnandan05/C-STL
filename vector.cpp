//Topic - vector
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
int main() {

vec <int> v1 ={ 1,2};
vec<int> v2= {3,4};
vec <int> v3(v1);
vec <int> v4={v2.begin(),v2.end()};

for(auto i : v4){
 cout<<i<<" ";
}
   
cout<<endl;
for(auto i : v3){
    cout<<i<<" ";
}
 cout<<endl;
v1.push_back(3); v1.push_back(4); v1.push_back(5); v1.push_back(6);

for(auto i : v1) cout<<i<<" ";
cout<<endl;
vec <int> raj= {v1.begin(), v1.begin()+3};
for(auto i : raj) cout<<i<<" ";
cout<<endl;

return 0;
}