#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int missingInteger(vector<int>& nums) {
	int currentPrefixSum = 0;
	unordered_set<int> prefixSums;

	for (int num : nums) {
		currentPrefixSum += num;
		prefixSums.insert(currentPrefixSum);
	}

	int currentMin = 1;
	while (prefixSums.find(currentMin) != prefixSums.end()) {
		++currentMin;
	}

	return currentMin;
}

int main() {
	vector<int> nums = { 1, 2, 3, 2, 5 };

	int result = missingInteger(nums);
	cout << result << endl;
	return 0;
}