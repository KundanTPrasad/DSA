#include <iostream>
using namespace std;
class Node{
public:
    int val;            // creating node
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail =NULL;
        size =0;
    }
    void insertAtTail(int val){
        Node* temp =new Node(val);
        // two case empty linkedlist and non empty linked list
        if(size==0) head=tail=temp;
        else {
            tail->next=temp;
            tail =temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIndex(int val, int idx){
        if(idx==0) {
            insertAtHead(val);
            return;
        }
        if(idx==size){
            insertAtTail(val);
            return;
        }
        Node* temp = head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        Node* ptr =new Node(val);
        ptr->next=temp->next;
        temp->next=ptr;
        size++;
    }

    int getAtIndex(int idx){
        if(idx==0) return head->val;
        if(idx==size) return tail->val;
        if(idx>size || idx<0) {
            cout<<"Invalid";
            return -1;
        }
        Node* temp = head;
        for(int i=0;i<idx-1;i++){
            temp =temp->next;
        }
        return temp->val;
    }
    void deleteAtHead(){
        if(size==0) {
            cout<<"Linked List is Empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0) {
            cout<<"Linked List is Empty";
            return;
        }
        Node* temp =head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail = temp;
        size--;
    }
    void deleteAtidx(int idx){
        if(size==0) {
            cout<<"Linked List is Empty";
            return;
        }

        if(idx<0 ||  idx>size) cout<<"Invalid";

         if(idx==1) {
            deleteAtHead();
            return;
        }
        if(idx==size){
            deleteAtTail();
            return;
        }
        Node* temp =head;
        for(int i=0;i<idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        size--;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<"("<<temp->val<<")->";
            temp = temp->next;
        }
        cout<<"(NULL)";
        cout<<endl;
    }
};
int main() {
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtHead(1000);
    ll.display();
    ll.insertAtIndex(20000,5);
    ll.display();
    ll.insertAtIndex(30000,6);
    ll.display();
    ll.insertAtTail(40);
    ll.display();
    cout<<ll.getAtIndex(0);
    cout<<endl;
    cout<<ll.getAtIndex(9);
    cout<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtidx(4);
    ll.display();
    cout<<ll.size;
    return 0;
}
