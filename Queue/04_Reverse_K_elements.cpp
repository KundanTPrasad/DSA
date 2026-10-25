#include <iostream>
#include<queue>
#include<stack>
using namespace std;
void Reverse_K_Elements(queue<int>&q, int k){
    int n = q.size();
    stack<int>st;
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i<=(n-k);i++){
        q.push(q.front());
        q.pop();
    }
}
void print(queue<int>&q){
    int n = q.size();
    for(int i=1;i<=n;i++){
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
    // print(q);
    Reverse_K_Elements(q,4);
    print(q);
    return 0;
}
