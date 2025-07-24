#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
    int removeElement(vector<int>& nums, int val) {
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == val) {
				nums.erase(nums.begin() + i);
				i = i - 1;
			}
		}
		return nums.size();
    }
//};

int main() {
	int val;
	vector<int> nums;
	
	int n;
	while (cin >> n && n != 999) {
		nums.push_back(n);
	}
	cin >> val;
	
	cout << removeElement(nums, val) << "\n";
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	return 0;
}