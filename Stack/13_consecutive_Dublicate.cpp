#include <iostream>
#include<stack>
#include<string>
#include <algorithm>
using namespace std;
string RemovedRepetition(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    s="";
    while(st.size()>0){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}

int main() {
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    s = RemovedRepetition(s);
    cout<<s<<endl;
    return 0;
}
