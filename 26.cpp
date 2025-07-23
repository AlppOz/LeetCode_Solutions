#include <iostream>
#include <vector>
#include <string>
using namespace std;

//class Solution {
//public:
    int removeDuplicates(vector<int>& nums) {
		int k = nums.size();
        for (int i = 0; i < nums.size(); i++) {
			if (i != nums.size() - 1 && nums[i] == nums[i + 1]) {
				nums.erase(nums.begin() + i);
				k = k - 1;
				i = i - 1;
			}
		}
		return k;
    }
//};

int main() {
	int n;
	vector<int> nums;
	while (cin >> n && n != 999) {
		nums.push_back(n);
	}
	cout << removeDuplicates(nums) << "\n";
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	return 0;
}