#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minElement(vector<int>& nums) {
	vector<int> replaceNums;

	for (int i = 0; i < nums.size(); i++) {
		int sum = 0;
		int num = nums[i];

		while (num > 0) {
			sum += num % 10; // 取個位數字加到sum裡面
			num /= 10; // 取十位數字
		}
		replaceNums.push_back(sum);
	}
	// 用 min_element 取最小值
	int minValue = *min_element(replaceNums.begin(), replaceNums.end());
	return minValue;
}

int main() {
	vector<int> nums = { 1000,19,199 };

	int result = minElement(nums);
	cout << result << endl;
	return 0;
}