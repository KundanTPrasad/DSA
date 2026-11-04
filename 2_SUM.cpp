#include <iostream>
using namespace std;

int main() {  //0,1,2, 3, 4
    int arr[5]={2,7,3,15,6}; // 0,1  2,4
    // print index of that numbers whose sum is 9
    for(int i = 0;i<5;i++){
        int a = 0;
        int b = 0;
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==9){
                a=i;
                b=j;
            }
        }
        if(a!=0 || b!=0) cout<<a<<" "<<b<<endl;
    }

    return 0;
}
