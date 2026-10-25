#include <iostream>
#include<queue>
using namespace std;
void print(queue<int>& q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    print(q);
    cout<<"\n Size "<<q.size();

    return 0;
}
