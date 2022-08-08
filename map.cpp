//Topic - map stl
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
int main() {
// key -> value
// raj -> 79
// dj -> 54
// tanmoy -> 20
// sudipta -> 41

//------------- Properties ---------------

// it's always sorted accr to the keys
// sorted linearly in legcigographycally order
// map only stores unique keys
// time complexity of map is O(log n)


//-------- Map Declaration ---------

// map<datatype_1,datatype_2> map_name;
    map<string,int> mpp;


// --------- map define -----------

// 1. map_name[key]=value;

    mpp["raj"]= 79;
    mpp["dj"]=54;
    mpp["tanmoy"]=20; 
    mpp["sudipta"] = 41;


    mpp["raj"]= 29; // it's overwrite 29 , bcz map is unique


// 2. mpp.emplace(key,value)
    
    mpp.emplace("manu",14);



// --------- map deletion --------

// 1. map_name.erase(key)

    mpp.erase("tanmoy"); // only deletes the mentioned key

// 2. map_name.erase(iterator)

    mpp.erase(mpp.begin()); // deletes the key to the given iterator

    mpp.erase(mpp.begin(),mpp.begin() + 2); // erase the given range of elements
    
// 3.  map_name.clear()

   mpp.clear(); // deletes the entire map


// Q. How to find an element in a map?

   auto i= mpp.find("dj"); // points to where the mentioned key lies
                           //return true or false accr to the key is present or not

// Q. How to check a map empty or not ?
     
     if(mpp.empty()){  // it gives a boolean value
         cout<<"yes";
     }
     else 
     cout<<"no";
     cout<<endl;

  mpp.count("dj"); // it always returns 1 as it stores only 1
    // instances of the key

//--------- printing map ------------

// 1st way
for(auto it: mpp){
    cout<< it.first <<" "<< it.second<<endl; // map is working like a pair
}

// 2nd way
for(auto it=mpp.begin();it!=mpp.end();it++){
    cout<< it->first <<" "<< it->second <<endl;



//--------- Multi Map --------------

multimap<string,int> mmp;
mpp["dj"]=5;
mpp["dj"]=6;
mpp.emplace("dj",4);
// similar to multi set concept
// map --> sorted and unique keys
// unordered map --> unsorted and unique keys
// multi map --> sorted and multiple keys






}









return 0;
}