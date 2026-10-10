#include <iostream>
using namespace std;

class Student{
public:
    int roll;
    string name;
    float marks;
    Student(string name,int roll,float marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
// void change(Student s){
//     s.name = "Kundan";     //Change by value
// }
void change(Student& s){
    s.name = "Kundan";       //change by reference
}

int main() {
    Student s("Kundan Prasad",214,8.95);
    cout<<s.name<<endl;
    change(s);
    cout<<s.name<<endl;

    return 0;
}
