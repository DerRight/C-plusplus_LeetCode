#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
	// ��XOR���S�ʡA�ۦP��0�A���ۦP��1
	// �o���p�G���ۦP���ܴN�|��X0�A���ۦP�N�O1
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