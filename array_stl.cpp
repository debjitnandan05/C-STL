//Topic - array in stl
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
// int a[4];
// a = new array[]
// array <int,4> a;
int main() {

// array <int,5> a;
// a.fill(6); // 6 6 6 6 6
// for(ll i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }


// iterators

array<int, 5> b={1,2,3,4,5};
             //  0,1,2,3,4    b.begin
//               4,3,2,1,0    b.rbegin
// for(auto it:b.begin(); it!=b.end(); it++){
//     cout<<*it<<" ";
// }
// cout<<"\n";



for(auto it=b.begin(); it!=b.end(); it++){
    cout<<*it<<" ";
}



return 0;
}