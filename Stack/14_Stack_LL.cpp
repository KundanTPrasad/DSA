#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Stack{
public:
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node* newNode = new(nothrow) Node(val);
        if(newNode == NULL) {
            cout<<"OVERFLOW";
            return;
        }
        if(head==NULL){
            head = newNode;
        }
        else{
            newNode->next=head;
            head = newNode;
        }
        size++;
    }
    int top(){
        if(size==0) return -1;
        else{
            return head->data;
        }
    }
    void pop (){
        if(size==0) cout<<"Empty Stack";
        else{
            Node* temp;
            temp =head;
            head = head->next;
            delete temp;
            size--;
        }
    }
    void displayStackEmpty(){
        for(int i=size;i>0;i--){
            cout<<top()<<" ";
            pop();
        }
        cout<<endl;
    }
    void displayStackNonEmpty(){
        Node* temp =head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.pop();
    // cout<<s.top()<<endl;
    // cout<<s.size<<endl;
    s.displayStackNonEmpty();
    // s.displayStackEmpty();
    // s.displayStackNonEmpty();
    cout<<s.top()<<endl;
    cout<<"size:"<<s.size<<endl;
    return 0;
}
