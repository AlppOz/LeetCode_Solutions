#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> nums;
	char yap;
	
	while(cin >> yap && yap != '[');
	
	while (yap != ']') {
		int num;
		cin >> num;
		cin >> yap;
		nums.push_back(num);
	}
	
	int target;
	while(cin >> yap && yap != '=');
	cin >> target;
	
	//vector<int> finalfinalv3;
	for (int i = 0; i < nums.size(); i++) {
		for (int n = i + 1; n < nums.size(); n++) {
			if (nums[i] + nums[n] == target) {
				//finalfinalv3.push_back(i);
				//finalfinalv3.push_back(i + n);
				cout << '[' << i << ',' << n << ']';
			}
		}
	}
}