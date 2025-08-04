#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
    int searchInsert(vector<int>& nums, int target) {
		if (nums.back() < target || nums.empty()) {
			return nums.size();
		}
		else {
			for (int i = 0; i < nums.size(); i++) {
				if (nums[i] >= target) {
					return i;
				}
			}
		}
		return nums.size();
        
    }
//};

int main() {
	int n, target;
	vector<int> nums;
	while (cin >> n && n != 999) {
		nums.push_back(n);
	}
	cin >> target;
	cout << searchInsert(nums, target);
	return 0;
}