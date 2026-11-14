#include <iostream>
#include<vector>
#include<stack>
using namespace std;
void nextGreaterUsingArray(int arr[],int n){
    // time complexity = n^2 and space complexity O(1)
    vector<int>v;
    for(int i=0;i<n;i++){
        int x = -1;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[i]) {
                x = arr[j];
                break;
            }
        }
        v.push_back(x);
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void nextGreaterUsingStack(int arr[], int n){
    stack<int>st;
    int a[n];
    st.push(arr[n-1]);
    a[n-1] = -1;
    for(int i = n-2;i>=0;i--){
        // checking-- pop all the elements smaller that arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //answer marking;
        if(st.size()==0) a[i] = -1;
        else a[i] = st.top();

        // stack filling
        st.push(arr[i]);
    }
    for(int i = 0 ;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
}

int main() {
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    nextGreaterUsingArray(arr,n);
    nextGreaterUsingStack(arr,n);

    return 0;
}
