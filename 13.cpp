#include <iostream>
#include <vector>
#include <string>
using namespace std;

int romanToInt(string s) {
	vector<int> sint;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'I') {
			sint.push_back(1);
		}
		else if (s[i] == 'V') {
			sint.push_back(5);
		}
		else if (s[i] == 'X') {
			sint.push_back(10);
		}
		else if (s[i] == 'L') {
			sint.push_back(50);
		}
		else if (s[i] == 'C') {
			sint.push_back(100);
		}
		else if (s[i] == 'D') {
			sint.push_back(500);
		}
		else if (s[i] == 'M') {
			sint.push_back(1000);
		}
	}
	
	int total = 0;
	for (int i = 0; i < sint.size(); i++) {
		if (i == sint.size() - 1 || sint[i] >= sint[i + 1]) {
			total = total + sint[i];
		}
		else {
			total = total - sint[i];
		}
	}
	return total;
}

int main() {
	string s;
	while (cin >> s && s != "q") {
		cout << romanToInt(s) << "\n";
	}
	
	return 0;
}