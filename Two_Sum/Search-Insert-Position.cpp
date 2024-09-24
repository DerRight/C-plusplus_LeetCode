#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
	int left = 0;
	int right = nums.size() - 1;

	while (left <= right) {
		// �M�䤤����
		// �Y�p�󤤶��ȡA�N�����b��M��
		// �Y�j�󤤶��ȡA�N���k�b��M��
		int mid = (left + right) / 2; 

		if (nums[mid] == target) {
			return mid;
		}
		else if (nums[mid] > target) {
			right = mid - 1;
		}
		else if (nums[mid] < target) {
			left = mid + 1;
		}
	}

	return left;
}

int main() {
	vector<int> nums = { 1,3,5,6 };
	int target = 2;

	int result = searchInsert(nums, target);
	cout << result << endl;

	return 0;
}