#include <iostream>
#include<queue>
using namespace std;
void print(queue<int>& q){
    int n =q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}

void pushAtIndex(queue<int>& q,int idx,int val){
    int n=q.size();
    for(int i = 0;i<idx;i++){
        q.push(q.front());
        q.pop();
    }
    q.push(val);
    for(int i=0;i<(n-idx);i++){
        q.push(q.front());
        q.pop();
    }
}

void popAtIndex(queue<int>& q, int idx){
    int n=q.size();
    for(int i=0;i<idx;i++){
         q.push(q.front());
        q.pop();
    }
    q.pop();
    for(int i=0;i<(n-idx-1);i++){
        q.push(q.front());
        q.pop();
    }


}

void push_back(queue<int>& q,int val){
    q.push(val);
}

int getAtIndex(queue<int>& q,int idx){
    int n=q.size();
    int get = -1;
    for(int i=0;i<idx;i++){
        q.push(q.front());
        q.pop();
    }
    get = q.front();
    for(int i=0;i<(n-idx);i++){
        q.push(q.front());
        q.pop();
    }
    return get;


}


int main() {
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    print(q);
    pushAtIndex(q,4,1000);
    print(q);
    popAtIndex(q,3);
    print(q);
    push_back(q,3000);
    print(q);
    cout<<getAtIndex(q,1);
    cout<<endl;
    print(q);

    return 0;
}
