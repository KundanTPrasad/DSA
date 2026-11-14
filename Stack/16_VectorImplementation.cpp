#include <iostream>
#include <vector>
using namespace std;
class Stack{
public:
    vector<int>arr;
    void push(int val){
        arr.push_back(val);
    }
    int top(){
        if(arr.size()==0){
            cout<<"Stack is Empty!";
            return -1;
        }
        return arr[arr.size()-1];
    }
    void pop(){
        if(arr.size()==0){
            cout<<"Stack is Empty!\n";
            return;
        }
        arr.pop_back();
    }
    int size(){
        return arr.size();
    }
    void display(){
        if(arr.size()==0){
            cout<<"Stack is Empty!";
            return;
        }
        for(int i = arr.size()-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void isEmpty(){
        if(arr.size()==0) cout<<"\nyes\n";
        else cout<<"\nNO\n";
    }

};

int main() {
 Stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.push(60);
    // s.push(70);
    // s.push(80);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.display();
    s.isEmpty();

    return 0;
}
