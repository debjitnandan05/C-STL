//Topic - Stack and queue
#include <bits/stdc++.h>
using namespace std;
#define ll long
#define str string
#define vec vector
int main() {

    stack<int> st; //LIFO DS
    //push or emplace --> enter an element in a stack
    //pop --> deletes the last entered element
    //top --> gives the last entered element
    //size --> gives the size of the element at the moment
    //empty --> check the stack is empty or not

    st.push(2);st.emplace(5);
    st.emplace(9);
    st.push(1);
    cout<<st.top()<<" "<<st.size()<<endl;
    st.pop();
    cout<<st.top();
    
    bool flag = st.empty(); // returns true if stack is empty or false

    // deleted the entire stack
    while (!st.empty())
    {
        st.pop();
    }
    

return 0;
}