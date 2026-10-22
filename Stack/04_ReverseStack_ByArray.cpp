#include <iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
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
    cout<<endl;
    int n = s.size();
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=s.top();
        s.pop();
    }
    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }
    cout<<"Reverse\n";
    print(s);
    return 0;
}
