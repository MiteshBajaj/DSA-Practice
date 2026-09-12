#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 2, 4, 5};
    int n = 5;

    int repeating = -1;
    int missing = -1;

    for (int i = 1; i <= n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                count++;
            }
        }

        if (count == 2)
            repeating = i;

        if (count == 0)
            missing = i;
    }

    cout << "Repeating number: " << repeating << endl;
    cout << "Missing number: " << missing << endl;

    return 0;
}