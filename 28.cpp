#include <iostream>
#include <string>
using namespace std;

//class Solution {
//public:
    int strStr(string haystack, string needle) {
        int n = 0;
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[n]) {
                n = n + 1;
            }
            else {
				i = i - n;
                n = 0;
            }
            if (n == needle.size()) {
                return i - needle.size() + 1;
                break;
            }
        }
        return -1;
    }
//};

int main() {
    string haystack, needle;
    cin >> haystack >> needle;
    cout << strStr(haystack, needle);

    return 0;
}