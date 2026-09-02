#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 6};
    int n = 5;
    int target = 6;

    int left = 0;
    int right = n - 1;

    while (left < right) {

        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found: "
                 << arr[left] << " + "
                 << arr[right] << endl;
            break;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}