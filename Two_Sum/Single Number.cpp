#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
	// 用XOR的特性，相同為0，不相同為1
	// 得知如果有相同的話就會輸出0，不相同就是1
	int result = nums[0];

	for (int i = 1; i < nums.size(); i++) {
		result^=nums[i];
	}
	return result;
}

int main() {
	vector<int> nums = { 4,1,2,1,2 };
	int result = singleNumber(nums);
	cout << result << endl;

	return 0;
}