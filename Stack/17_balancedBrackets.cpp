#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isBalanced(string a){
    if(a.length()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<a.length();i++){
        // condition 1;
        if(a[i] == '(') st.push('(');
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    return (st.size()==0);
}
int main() {
    string a = ")((())()";
    cout<<isBalanced(a);
    return 0;
}
