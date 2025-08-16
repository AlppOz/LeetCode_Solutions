#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(const string& ns) {
	const int S = ns.size();
	for (int i = 0; i < (S / 2); i++) {
		if (ns[i] != ns[S - i - 1]) {
			return false;
		}
	}
	return true;
}

//class Solution {
//public:
    string longestPalindrome(string s) {
		string currentmax = "";
		int maxlength = 0;
		const int N = s.size();
        for (int n = 0; n + maxlength < N; n++) {
			for (int i = N - n; i > 0; i--) {
				if (i <= maxlength) {
					break;
				}
				string contestant = s.substr(n, i);
				if (isPalindrome(contestant) == true && i > maxlength) {
					currentmax = contestant;
					maxlength = i;
					break;
				}
			}
			if (N - n <= maxlength) {
				break;
			}
		}
		return currentmax;
    }
//};

int main() {
	string s;
	while (cin >> s && s != "q") {
		cout << longestPalindrome(s) << "\n";
	}
	return 0;
}