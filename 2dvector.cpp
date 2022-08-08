//Topic - 2D vector
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
int main() {

vec <vec<int>> v;
vec <int> a={1,2,3}; // 1 2 3
vec <int> b ={4,5,6};
b.push_back(7); // 4 5 6 7
vec<int> c;
c.push_back(8);
c.emplace_back(9); // 8 9


v.emplace_back(a);   
v.push_back(b);
v.push_back(c);

// 1 2 3
// 4 5 6 7
// 8 9

for(auto it : v){
    for(auto i : it){
        cout<<i<<" ";
    }
    cout<<endl;
}
    // vec <int> v(5,14)
    //define 10 x 20
    vec <vec<int>> vec1 (10,vec<int> (20,0));

return 0;
}