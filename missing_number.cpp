
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                count++;
            }
        }

        if (count == 0)
            cout << "Missing number: " << i << endl;
        else if (count == 2)
            cout << "Duplicate number: " << i << endl;
    }

    return 0;
}
