#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findXSum(vector<int>& nums, int k, int x) {
	unordered_map<int, int> frequency;

	// 魁–计瞷Ω计
	for (int num : nums) {
		frequency[num]++;
	}

	// 碝т瞷Ω计程计
	int mostFrequencyNum = nums[0];
	int maxCount = 0;

	for (const auto& pair : frequency) {
		if (pair.second > maxCount) {
			mostFrequencyNum = pair.first;
			maxCount = pair.second;
		}
	}
}

int main() {
	vector<int> nums = { 1,1,2,2,3,4,2,3 };
	int k = 6;
	int x = 2;

	vector<int> result = findXSum(nums, k, x);

	return 0;
}