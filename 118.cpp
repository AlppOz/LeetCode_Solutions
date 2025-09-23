#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
		vector<int> factorials;
		vector<vector<int>> list;
		int nk, t, m, factorial;
        unsigned long int top, bottom;
        for (int n = 0; n < numRows; n++) {
			
			for (int k = 0; k <= n; k++) {
				nk = n - k;
				if (k > nk) {
					t = k + 1;
					m = nk;
				}
				else {
					t = nk + 1;
					m = k;
				}
				top = 1;
				for (int z = t; z <= n; z++) {
					if (t != 0) {
						top = top * z;
					}
				}
				bottom = 1;
				for (int l = 0; l <= m; l++) {
					if (l != 0) {
						bottom = bottom * l;
					}
				}
				factorial = top/bottom;
				factorials.push_back(factorial);
			}
			list.push_back(factorials);
            factorials.clear();
		}
		return list;
    }
};