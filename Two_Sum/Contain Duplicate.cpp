#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
	// �� unordered_set �ӹM����Ӱ}�C
	unordered_set<int> seen;

	for (int num : nums) {

		// .count �O�Ψ��ˬd�Ӥ����O�_�s�b�� unordered_set ��
		// �� unordered_set �����\�����Ƥ��󪺦s�b
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