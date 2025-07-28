#include <iostream>
#include <vector>
#include <string>
using namespace std;


//class Solution {
//public:
    int lengthOfLongestSubstring(string s) {
		vector<int> finalfinalv4;
		int currentmax = 0;
		for (int n = 0; n < s.size(); n++) {
			if (s.size() - n <= currentmax) {
				break;
			}
			vector<char> finalfinalv3;
			vector<bool> ascii(256, true);
			
			int localmax = 0;
			for (int i = n; i < s.size(); i++) {
				char sch = s[i];
				int sassci = int(sch);
				if (ascii[sassci]) {
					ascii[sassci] = false;
					localmax = localmax + 1;
				}
				else {
					break;
				}
			}
			currentmax = max(currentmax, localmax);
		}
		return currentmax;
    }
//};

int main() {
	string s;
	while (cin >> s && s != "q") {
		cout << lengthOfLongestSubstring(s) << "\n";
	}
	
	return 0;
}