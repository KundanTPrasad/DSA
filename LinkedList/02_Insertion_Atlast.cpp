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
        cout<<"("<<temp->val<<")->";
        temp=temp->next;
    }
    cout<<"(X)";
    cout<<endl;
}
void InserAtLast(Node* head,int val){
    Node* temp = head;
    while(temp->next!=NULL){
            temp=temp->next;
    }
    Node* ptr = new Node(val);
    temp->next=ptr;
}
void insertAtBegin(Node* &a,int val){  // Node* &a  == mujhe a ka address dena tha
    Node* ptr = new Node(val);
    ptr->next=a;
    a=ptr;
}
int size(Node* a){
    Node* temp=a;
    int x=0;
    while(temp!=NULL){
        x++;
        temp =temp->next;
    }
    return 0;
}

void insertAtIndex(Node* head,int idx,int val){
    Node* temp = head;
    int size=0;
    while(size<idx-1){
        size++;
        temp=temp->next;
    }
    Node* ptr = new Node(val);
    ptr->next=temp->next;
    temp->next=ptr;

}
int getAtIndex(Node* head,int idx){
    Node* temp =head;
    int size = 0;
    while(size<idx){
        temp = temp->next;
        size++;
    }
    return temp->val;
}
void deleteAtHead(Node* &a){
    cout<<endl;
    a=a->next;
}
void deleteAtEnd(Node* &a){
    Node* temp = a;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main() {
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    InserAtLast(a,100);
    display(a);
    insertAtBegin(a,2000);
    display(a);
    insertAtIndex(a,4,50000);
    display(a);
    cout<<getAtIndex(a,2);
    deleteAtHead(a);
    display(a);
    deleteAtEnd(a);
    display(a);

    return 0;
}
