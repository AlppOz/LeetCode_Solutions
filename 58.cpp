#include <iostream>
#include <string>
using namespace std;

//class Solution {
//public:
    int lengthOfLastWord(string s) {
		int streak = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
			if (s[i] != ' ') {
				streak = streak + 1;
			}
			else {
				if (streak != 0) {
					return streak;
				}
			}
		}
		return streak;
    }
//};