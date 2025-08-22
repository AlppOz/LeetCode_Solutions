#include <iostream>
using namespace std;

//class Solution {
//public:
    int mySqrt(int x) {
        for (long int i = 1; i < (x/2) + 1; i++) {
			if (i * i == x) {
				return i;
			}
			else if (i * i > x) {
				return i - 1;
			}
		}
    }
//};

int main() {
	int n;
	while (cin >> n && n != 999) {
		cout << mySqrt(n) << "\n";
	}
	return 0;
}