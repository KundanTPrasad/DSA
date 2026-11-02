#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
};

void print(Node* temp){ // this is travelling using pointer
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp =temp->next;
    }
    cout<<"(X)"<<endl;
}

void display(Node temp){  // this will travel by using value
    while(temp.next!=NULL){
        cout<<temp.val<<"->";
        temp = *(temp.next);  // last wala print nahi hua
    }
    cout<<temp.val;   // mera temp last wala per tha to maine usse print kar diya aur hamara last
                    // wala bach raha tha
}

int main() {
    Node a,b,c,d,e;
    // assign val   linking address
    a.val = 10;     a.next=&b;
    b.val=20;       b.next=&c;
    c.val=30;       c.next=&d;
    d.val=40;       d.next=&e;
    e.val=50;       e.next=NULL;

    //printing linked list
    print(&a);
    display(a);

    return 0;
}
