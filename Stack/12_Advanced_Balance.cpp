#include <iostream>
#include<stack>
using namespace std;
bool IsBalanced(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'); // ) st.push(s[i]);
        else {          // )}]
            if(st.size()==0) return false;
            else{
                if(s[i]==')') st.pop();
                if(s[i]==']') st.pop();
                if(s[i]=='}') st.pop();
            }
    }
    if(st.size()==0) return true;
    else return false;
}
}
int main(){
    string s = "{[())]}";
    cout<<IsBalanced(s);

    return 0;
}
