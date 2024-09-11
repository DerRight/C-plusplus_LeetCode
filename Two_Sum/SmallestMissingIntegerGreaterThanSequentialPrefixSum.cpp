#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int missingInteger(vector<int>& nums) {
	// ��l�]�w���X�M���}�C���Ĥ@�Ӥ���
	int s = nums[0];

	// �M����ӲռơA�p��q�ĤG�Ӥ����}�l�����X�M
	// ����O��e��������e�@�Ӥ��� +1 (�Y�}�C�s��)
	for (int j = 1; j < nums.size() && nums[j] == nums[j - 1] + 1; ++j) {
		s += nums[j];
	}

	// �إߤ@�� bitset (���׬�51) �ӼаO�}�C���w�g�X�{�����
	bitset<51> vis;

	// �M���ƲաA�N�C�Ӥ����b bitset ���аO�@�� 1 �A��ܤw�g�X�{
	for (int x : nums) {
		vis[x] = 1;
	}

	// �q���X�M s �}�l�M���A�M��Ĥ@�ӥ��X�{�b�}�C�������
	for (int x = s;; ++x) {

		// �p�G x �W�L bitset ���d�� (�Y51)�A�Ϊ� x �S���b�}�C���X�{ (vis[x]��0)�A�h��^ x
		if (x >= 51 || !vis[x]) {
			return x; // ��^�̤p���ʥ���ƭ�
		}
	}
}

int main() {
	vector<int> nums = { 1, 2, 3, 2, 5 };

	int result = missingInteger(nums);
	cout << result << endl;
	return 0;
}