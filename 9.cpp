#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n) {
	string ns = to_string(n);
	for (int i = 0; i < (ns.size() / 2); i++) {
		if (ns[i] != ns[ns.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	cout << isPalindrome(n);
	
	return 0;
}