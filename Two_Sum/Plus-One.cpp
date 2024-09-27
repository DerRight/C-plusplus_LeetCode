#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		// 眖程じ┕玡筂菌
		for (int i = digits.size() - 1; i >= 0; i--) {
			// 璝程じ9
			// 玥程じ+1
			if (digits[i] < 9) {
				digits[i]++;
				return digits;
			}
			// 狦程じ9玥1跑Θ0
			digits[i] = 0;
		}
		// 狦┮Τじ常琌0弧玻ネ穝秈秨繷础1
		digits.insert(digits.begin(), 1);
		return digits;
	}
};

int main() {
	Solution sol;
	vector<int> digits = { 4, 3, 2, 9 };
	vector<int> result = sol.plusOne(digits);

	for (int num : result) {
		cout << num << " ";
	}

	return 0;
}