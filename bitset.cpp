//Topic - bitset 
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
int main() {

// int -> 16 bit 
// char -> 8 bit 
// bitset -> 1 bit 
// it behaves like a container which takes 1 bit memory

bitset<5> bt;
cin>>bt; // 11111

// some functions of bitset

// all()
cout<<bt.all()<<endl; 
// all bits are 1 --> true else false

//any()
cout<<bt.any()<<endl;
//any of the bit is 1 --> true 

// count()
cout<<bt.count()<<endl; // prints number of set bits(i.e 1)

// flip
//bt=10010
cout<<bt.flip()<<endl;
cout << bt.flip(2)<<endl; //it will return 10110
// flip the bit in the mentioned position

// none
// if none is set --> true else false
//bt-->10000
cout<<bt.none()<<endl; //false
//bt--> 00000 true

// set
bt.set() ;// sets the every to 1
bt.set(2) ;// set the bit in the second position
bt.set(2,0); // set the 0 bit in the second position

// reset
bt.reset() ;//unset the every bit
bt.reset(2);
bt.reset(2,0);

// size
cout<<bt.size()<<endl; // give the size of bitset

// test
cout<<bt.test(1); // check if the bit is set or not at index 1




return 0;
}