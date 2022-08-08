//Topic - Queue
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
int main() {

queue<int>q;
// FIFO operation  ds
//push -> push an element
//pop --> deletes the first entered element
//front --> gives the first entered element
//size --> gives the size of the element at the moment
//empty --> check the queue is empty or not
// all the elements are taken linear time

q.push(1);
q.push(3);q.push(5);q.push(6);
cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;


// Delets the entire queue 
while (!q.empty()){     // it takes linear time 
    q.pop();
}

return 0;
}