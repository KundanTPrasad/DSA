#include <iostream>
#include<stack>
using namespace std;

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
    // while(s.size()>0){
    //     cout<<s.top()<<" "; // this method - stack -empty
    //     s.pop();
    // }

    stack<int>temp;
    cout<<"Printing In Reverse Order\n";
    while(s.size()>0){
        cout<<s.top()<<" ";
        temp.push(s.top());
        s.pop();
    }
    cout<<"\nPrinting in Actual Order\n";
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        s.push(temp.top());
        temp.pop();
    }
    cout<<"\nSize of s: "<<s.size();
    return 0;
}
