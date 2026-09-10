#include <iostream>
using namespace std;

int main() {

    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};

    int n = 4;
    int m = 4;

    int i = 0;
    int j = 0;

    cout << "Merged array: ";

    while (i < n && j < m) {

        if (a[i] < b[j]) {
            cout << a[i] << " ";
            i++;
        }
        else {
            cout << b[j] << " ";
            j++;
        }
    }

    while (i < n) {
        cout << a[i] << " ";
        i++;
    }

    while (j < m) {
        cout << b[j] << " ";
        j++;
    }

    cout << endl;

    return 0;
}