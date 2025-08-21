#include <iostream>
#include <string>
#include <vector>
using namespace std;

//class Solution {
//public:
    string addBinary(string a, string b) {
		if (a.size() > b.size()) {
			int z = 0;
			while (a.size() != b.size()) {
				b.insert(z, "0");
				z = z + 1;
			}
		}
		else if (a.size() < b.size()) {
			int z = 0;
			while (a.size() != b.size()) {
				a.insert(z, "0");
				z = z + 1;
			}
		}
		int N = a.size() - 1;
		int rem = 0;
		vector<char> finalfinalv3;
		for (int i = N; i >= 0; i--) {
			if (a[i] == '1' && b[i] == '1' && rem == 0) {
				finalfinalv3.push_back('0');
				rem = 1;
			}
			else if (a[i] == '1' && b[i] == '1' && rem == 1) {
				finalfinalv3.push_back('1');
				rem = 1;
			}
			else if ((a[i] == '1' xor b[i] == '1') && rem == 0) {
				finalfinalv3.push_back('1');
				rem = 0;
			}
			else if ((a[i] == '1' xor b[i] == '1') && rem == 1) {
				finalfinalv3.push_back('0');
				rem = 1;
			}
			else if (a[i] == '0' && b[i] == '0' && rem == 0) {
				finalfinalv3.push_back('0');
				rem = 0;
			}
			else if (a[i] == '0' && b[i] == '0' && rem == 1) {
				finalfinalv3.push_back('1');
				rem = 0;
			}
		}
		if (rem == 1) {
			finalfinalv3.push_back('1');
		}
		string finalfinalv4 = "";
		for (int i = finalfinalv3.size() - 1; i >= 0; i--) {
			finalfinalv4 = finalfinalv4 + finalfinalv3[i];
		}
		return finalfinalv4;
    }
//};

int main() {
	string a, b;
	cin >> a >> b;
	cout << addBinary(a, b);
	return 0;
}