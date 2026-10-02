#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int roll, age;
    float cgpa;
};

int main() {
    Student k,h,l;
    k.name = "Kundan Prasad";
    k.roll = 214;
    k.age = 20;
    k.cgpa = 8.95;
    cout<<"Name: "<<k.name<<"\nRoll No. : "<<k.roll<<"\nAge : "<<k.age<<"\nCGPA : "<<k.cgpa<<"\n\n";

    h.name = "Harshit Gupta";
    h.roll = 164;
    h.age = 20;
    h.cgpa = 7.9;
    cout<<"Name: "<<h.name<<"\nRoll No. : "<<h.roll<<"\nAge : "<<h.age<<"\nCGPA : "<<h.cgpa<<"\n\n";

    l ={"Lucky Changwal",218,20,5.0};
    cout<<"Name: "<<l.name<<"\nRoll No. : "<<l.roll<<"\nAge : "<<l.age<<"\nCGPA : "<<l.cgpa<<"\n\n";
    return 0;
}
