#include <iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx = -1;
    void push(int data){
        if(idx==5-1) {
            cout<<"OVERFLOW: data "<<data<<" can NOT be Inserted\n"; return;
        }
        idx++;
        arr[idx] = data;
    }
    int top(){
        if(idx == -1) {
            cout<<"UNDERFLOW ";
            return -1;
        }
        return arr[idx];
    }
    void pop(){
        if(idx == -1) {
            cout<<"UNDERFLOW \n";
            return;
        }
        idx--;
    }
    int size(){
        return idx+1;
    }
    void display(){
        if(idx == -1) {
            cout<<"Empty Stack \n";
            return;
        }
        for(int i=idx;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    bool isEmpty(){
        return (idx == -1);
    }
    bool isFull(){
        return (idx ==5-1);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.display();
    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;
    return 0;
}
