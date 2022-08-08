//Topic - petra and string
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s1,s2;
cin>>s1>>s2;
int c1=0,c2=0,t=s1.size();
for(int i=0;i<t;i++){
    if(tolower(s1[i]>tolower(s2[i]))){
        c1++;
    }

    if(tolower(s1[i]<tolower(s2[i]))){
        c2++;
    }
}

if(c1==c2) return 0;
if(c1>c2) return 1;
else return -1;


}