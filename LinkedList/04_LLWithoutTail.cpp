#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->next=NULL;
        this->val=val;
    }
};

class LinkedList{
public:
    Node* head;
    int size;
    LinkedList(){
        head=NULL;
        size=0;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"X\n";
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(size==0){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
        size++;
    }

    void insertAtTail(int val){
        //empty;
        if(size==0) insertAtHead(val);
        else{  //not empty;
            Node* newNode = new Node(val);
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next=newNode;
            size++;
        }
    }

    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Index";
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size){
            insertAtTail(val);
        }
        else {
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
            size++;
        }
    }

    int getData(int idx){
        // invaild idx , head, idx;
        if(idx<0 || idx>=size) {
            cout<<"invaild Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else{
            Node* temp = head;
            for(int i=0;i<idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        // empty ll; one ll, normal;
        if(size==0) cout<<"Empty LinkedList\n";
        else{
            head = head->next;
            // delete head;
            size--;
        }
    }
    void deleteTail(){
         if(size==0) cout<<"Empty LinkedList\n";
         else if(size==1) deleteAtHead();
         else{
            Node* temp =head;
            while(temp->next->next!=NULL){
                temp= temp->next;
            }
            temp->next=NULL;
            size--;
         }
    }

    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"invalid Index";
        else if(idx == 0) deleteAtHead();
        else if(idx==size-1) deleteTail();
        else{
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next= temp->next->next;
            size--;
        }
    }

};

int main() {
    LinkedList ll;
    //---- Insertion Complete ------//
    ll.insertAtHead(10);
    ll.display();
    ll.insertAtHead(20);
    ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(50);
    ll.insertAtTail(60);
    ll.insertAtTail(70);
    ll.insertAtTail(80);
    ll.insertAtTail(90);
    ll.insertAtTail(100);
    ll.insertAtTail(110);
    ll.insertAtTail(120);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtIdx(1,40);
    ll.display();
    cout<<ll.size<<endl;
    //------get data -----//
    cout<<ll.getData(2)<<endl;
    // //-----delete data-----//
    ll.deleteAtHead();
    ll.display();
    cout<<ll.size<<endl;
    ll.deleteAtHead();
    ll.display();
    cout<<ll.size<<endl;
    ll.deleteTail();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();
    cout<<ll.size<<endl;

    return 0;
}
