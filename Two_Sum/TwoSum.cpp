#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> Solution_TwoSum(vector<int>& nums, int target) {
	// �ϥ�unordered_map���x�s�C���ܼƩM�����
	unordered_map<int, int> numMap;

	for (int i = 0; i < nums.size(); i++) {
		// ��target�Ӵ�h�{�b�����ޭ�
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