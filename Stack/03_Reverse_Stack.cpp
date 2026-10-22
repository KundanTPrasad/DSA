#include <iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<endl;
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        // cout<<temp.top()<<endl;
        st.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int>s;
    stack<int>temp1;
    stack<int>temp2;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    cout<<"Before\n";
    print(s);
    while(s.size()>0){
        temp1.push(s.top());
        s.pop();
    }
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size()>0){
        s.push(temp2.top());
        temp2.pop();
    }
    cout<<"\nAfter Reversing\n";
    print(s);
    return 0;
}
