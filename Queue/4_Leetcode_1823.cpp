#include <iostream>
#include<queue>
using namespace std;
int findTheWinner(queue<int>&q, int k){
    int n=q.size();
    while(q.size()>1){
        for(int i=1;i<=k;i++){
            if(i==k) q.pop();
            else{
                q.push(q.front());
                q.pop();
            }
        }
    }
    return q.front();

}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<findTheWinner(q,3);
    return 0;
}
