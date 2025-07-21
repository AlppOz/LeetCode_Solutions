#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	vector<char> prefixletters;
	if (strs.size() == 1) {
		return strs[0];
	}
	else if (binary_search(strs.begin(), strs.end(), "") == false) {
		int n = 0;
		int counter = 0;
		while (n == counter) {
			int streak = 1;
			for (int i = 1; i < strs.size(); i++) {
				if (n < strs[i - 1].size() && n <= strs[i].size() && strs[i - 1][n] == strs[i][n] && streak == i) {
					streak = streak + 1;
				}
			}
			if (streak == strs.size()) {
				prefixletters.push_back(strs[0][n]);
				n = n + 1;
			}
			counter = counter + 1;
		}
		string finalfinalv3 = "";
		for (int i = 0; i < prefixletters.size(); i++) {
			finalfinalv3 = finalfinalv3 + prefixletters[i];
		}
		return finalfinalv3;
	}
	else {
		return "";
	}
}

int main() {
	string word;
	vector<string> strs;
	while (cin >> word && word != "q") {
		strs.push_back(word);
	}
	
	cout << longestCommonPrefix(strs);
	
	return 0;
}