#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
	// 用 unordered_set 來遍歷整個陣列
	unordered_set<int> seen;

	for (int num : nums) {

		// .count 是用來檢查該元素是否存在於 unordered_set 當中
		// 而 unordered_set 不允許有重複元件的存在
		if (seen.count(num)) {
			return true;
		}
		seen.insert(num);
	}
	return false;
}

int main() {
	vector<int> nums = { 1,2,3,1 };
	bool result = containsDuplicate(nums);
	cout << result << endl;

	return 0;
}