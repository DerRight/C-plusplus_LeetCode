#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> Solution_TwoSum(vector<int>& nums, int target) {
	// 使用unordered_map來儲存每個變數和其索引
	unordered_map<int, int> numMap;

	for (int i = 0; i < nums.size(); i++) {
		// 用target來減去現在的索引值
		int complement = target - nums[i];
		if (numMap.find(complement) != numMap.end()) {
			return { numMap[complement], i };
		}

		numMap[nums[i]] = i;
	}
	return {};
}

int main() {
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;

	Solution_TwoSum(nums, target);
	cout << Solution_TwoSum << endl;

	return 0;
}