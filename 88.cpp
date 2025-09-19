#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		vector<int> master;
		int i = 0;
		int z = i;
		int t = i;
		for (i; i < m + n; i++) {
            if (z == n) {
                master.push_back(nums1[t]);
                t = t + 1;
            }
			else if (nums2[z] <= nums1[t] || t >= m) {
				master.push_back(nums2[z]);
				z = z + 1;
			}
			else {
				master.push_back(nums1[t]);
				t = t + 1;
			}
		}
		nums1 = master;
    }
//};

int main() {
	vector<int> nums1 = {1,2,3,0,0,0};
	vector<int> nums2 = {2,5,6};
	merge(nums1, 3, nums2, 3);
	for (int i = 0; i < nums1.size(); i++) {
		cout << nums1[i] << " ";
	}
	return 0;
}