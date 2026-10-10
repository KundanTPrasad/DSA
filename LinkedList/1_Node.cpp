#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(Node* a){
    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";     // display 1 raw
        temp = temp->next;
    }
}
void display1(Node* a){
    Node* tem = a;
    while(1){
        if(tem!=NULL) {cout<<"("<<tem->val<<")->";
        tem = tem->next;
        }                           // display with khubshurti
        else {
            cout<<"(X)";
            break;
        }
    }
}
int main() {
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    cout<<endl;
    display1(a);
    return 0;
}
