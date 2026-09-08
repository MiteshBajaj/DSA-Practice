#include <iostream>
using namespace std;

int main() {

    int arr[] = {4, 7, 2, 9, 5, 1};
    int n = 6;
    int target = 9;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}
