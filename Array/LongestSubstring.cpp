#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string s = "abcabcbb";

    unordered_set<char> seen;

    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        while (seen.count(s[right])) {
            seen.erase(s[left]);
            left++;
        }

        seen.insert(s[right]);

        int length = right - left + 1;
        if (length > maxLength)
            maxLength = length;
    }

    cout << maxLength << endl;

    return 0;
}