#include <iostream>
#include<stack>
#include<queue>
#include<vector>

using namespace std;
 int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int>q;
    for(int i=0;i<students.size() ;i++){
        q.push(students[i]);
    }
    stack<int>st;
    for(int i=sandwiches.size()-1;i>=0;i--){
        st.push(sandwiches[i]);
    }
    int counter =0;
    while(counter<q.size()){
        if(st.top()==q.front()) {
            st.pop();
            q.pop();
            counter =0;
        }
        else{
            q.push(q.front());
            q.pop();
            counter++;
        }
    }
    return q.size();
 }
int main() {
    vector<int>st = {1,1,1,0,0,1};
    vector<int>sw ={1,0,0,0,1,1};
    cout<<countStudents(st,sw);

    return 0;
}
