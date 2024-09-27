#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		// �q�̫�@�Ӥ������e�M��
		for (int i = digits.size() - 1; i >= 0; i--) {
			// �Y�̫�@�Ӧ줸�p��9
			// �h�̫�@�Ӧ줸+1
			if (digits[i] < 9) {
				digits[i]++;
				return digits;
			}
			// �p�G�̫�@�Ӧ줸��9�A�h�[1�ܦ�0
			digits[i] = 0;
		}
		// �p�G�Ҧ��줸���O0�A�������ͤF�s���i��A�b�}�Y���J1
		digits.insert(digits.begin(), 1);
		return digits;
	}
};

int main() {
	Solution sol;
	vector<int> digits = { 4, 3, 2, 9 };
	vector<int> result = sol.plusOne(digits);

	for (int num : result) {
		cout << num << " ";
	}

	return 0;
}