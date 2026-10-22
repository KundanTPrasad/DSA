#include <iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
}
void InsertAtIndex(stack<int>& st,int index,int val){
    stack<int>temp;
    while(st.size()>index){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    print(s);
    InsertAtIndex(s,5,1000);
    print(s);
    return 0;
}
