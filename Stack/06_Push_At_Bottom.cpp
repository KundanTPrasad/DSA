#include <iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
}
void InsertAtBottom(stack<int>& s, int x){
    stack<int>temp;
    while(s.size()>0){
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    while(temp.size()>0){
        s.push(temp.top());
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
    //insert at bottom
    InsertAtBottom(s,1000);
    cout<<endl<<endl;
    print(s);

    return 0;
}
