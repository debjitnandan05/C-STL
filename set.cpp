//Topic - Set STL
#include <bits/stdc++.h>
#include<set>
using namespace std;
#define ll long long
#define str string
#define vec vector
int main() {

    //------- set -------
    set<int> st;
    int n;cin>>n;
    // sets store unique elements, i.e. it can't store the same element twice
    // sets store everything in assending fashion
    // u can't use st[0] instead of u use st.begin() iterator

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x); // complexity --> log n , where n is the size of set
        
    }
    
    
    // for(set<int> :: iterator it= st.begin();it!=st.end();it++ ){
    //     cout<<*it<<" ";
    // }
    //  cout<<endl;
    
    
    
    //------- erase function --------
   
    //st.erase(st.begin()); // st.erase(iterator)
    
    // for(auto it : st){
    //     cout<<it<<" ";
    // }
  
    //st.erase(st.begin(),st.begin() + 2); // [)
    //st.erase(starting iterator, ending iterator)
    // complexity log(n)
    
    //st.erase(5);  //st.erase(key) // deleting the 5
    
    // for(auto it: st){
    //     cout<<it<<" ";
    // } cout<<endl;
    
    
    // ------- find function -------
    
    auto it = st.find(5); // finding the key  // log(n)
    cout<<it<<endl;
    auto it1 = st.find(7); // it=st.end();
    cout<<it1<<endl;
    
//--------- Unorder set ---------
    unorder_set<int> st2;
    
    st2.insert(2);
    st2.insert(3);
    st2.insert(5);
    
    // average time complexity is O(1)
    // worst case is O(n), where n is the container size
    // but the worst case is linear in nature 
    
    // if only need of uniqeness , but not the assending order 
    // we use unorder list 
    
    // all functions we used in case of order set,
    // we can also use in unorder set
    
   // ------ finds how many times 2 occurs -------
    //st.count(2); 
    
   cout<< endl; 
 // ------- Multi set -------
 
 
 multiset<int> ms;
 
 ms.insert(3); ms.insert(2);ms.emplace(1);
 ms.insert(1);ms.insert(2);ms.insert(3);
 // st -> 1,1,2,2,3,3
 // no uniquness 
 // prints all elements in assending order
 // all functions are applicable like order set
 
 ms.erase(2); // all instances will be erased
 
 auto it = ms.find(2) // returns an iterator pointing to the 1st 2 
 ms.clear(); // delete the multiset
 ms.erase(ms.begin(),ms.end()); //deletes the entire set 
 // log n in size
 
 ms.erase(ms.find(3));
 ms.erase(ms.find(2),ms.find(2)+2);

return 0;
}