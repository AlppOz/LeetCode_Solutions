#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
    vector<int> plusOne(vector<int>& digits) {
		const int N = digits.size() - 1;
		for (int i = N; i >= 0; i--) {
			if (digits[i] != 9) {
				digits[i] = digits[i] + 1;
				return digits;
			}
			else {
				digits[i] = 0;
			}
		}
		digits.insert(digits.begin(), 1);
		return digits;
    }
//};

int main() {
	int n;
	vector<int> digits;
	while (cin >> n && n != 999) {
		digits.push_back(n);
	}
	plusOne(digits);
	for (int i = 0; i < digits.size(); i++) {
		cout << digits[i];
	}
	
	return 0;
}