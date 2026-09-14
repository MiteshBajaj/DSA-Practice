#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int nums[] = {4, 2, 2, 6, 4};
    int n = 5;
    int k = 6;

    unordered_map<int, int> frequency;

    int xorValue = 0;
    int count = 0;

    frequency[0] = 1;

    for (int i = 0; i < n; i++) {

        xorValue ^= nums[i];

        int required = xorValue ^ k;

        if (frequency.find(required) != frequency.end()) {
            count += frequency[required];
        }

        frequency[xorValue]++;
    }

    cout << "Number of subarrays with XOR " << k
         << ": " << count << endl;

    return 0;
}