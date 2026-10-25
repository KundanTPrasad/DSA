#include <iostream>
#include<stack>
#include<queue>
using namespace std;
void ReverseByStack(queue<int>&q){
    int n = q.size();
    stack<int> st;
    for(int i=0;i<n;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}

void print(queue<int>&q){
    int n = q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    print(q);
    ReverseByStack(q);
    cout<<"After Reverse:\n";
    print(q);


    return 0;
}
