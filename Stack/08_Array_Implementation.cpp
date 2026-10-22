#include <iostream>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx;
    Stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])-1){
            cout<<"Overflow\n";
            return;
        }
        idx++;
        arr[idx]=val;

    }
    void pop(){
        if(idx==-1){
            cout<<"UnderFlow";
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"UnderFlow\n";
            return -1;
        }
        return arr[idx];
    }
    int size(){
       return idx+1;
    }
};
int main() {
    Stack s;
    cout<<s.top()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    cout<<s.top()<<endl;
    cout<<s.size();
    return 0;
}
