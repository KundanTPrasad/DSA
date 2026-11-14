#include <iostream>
#include<stack>
#include<string>
using namespace std;
string RemovedRepetition(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    string a;
    while(st.size()){
        a.push_back(st.top());
        st.pop();
    }
    string v;
    for(int i = a.length()-1;i>=0;i--){
        v.push_back(a[i]);
    }
    return v;
}
int main() {
    string s = "aaabbcddaabffgeeeeeee";
    cout<<s<<endl;
    s = RemovedRepetition(s);
    cout<<s<<endl;
    return 0;
}
