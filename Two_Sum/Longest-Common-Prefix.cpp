#include <iostream>
#include <string>
#include <vector>
using namespace std;

// & ��ܤޥ�
string LongestCommonPrefix(vector<string>& strs) {
	if (strs.empty()) return "";

	// ���N�Ĥ@�Ӧr���@��l���X
	string prefix = strs[0];

	// �M���Ѿl���r��
	for (int i = 1; i < strs.size(); ++i) {

		// �b��e�r�� strs[i]] ���M�� prefix�C
		// find(prefix) ��^ prefix �b strs[i] ���X�{���_�l��m�C(0 ���ܬO���X)
		// find(prefix) != 0 ��ܷ�e���X���A�O�o�Ӧr�ꪺ���X�A�ݭn�Y�u�r��C
		while (strs[i].find(prefix) != 0) {

			// prefix.substr(0, prefix.size() - 1) �ϥ� substr �禡���X���X���e n-1 �Ӧr���A�Y�u���X�C
			// �U��{���X�O�C���Y�u prefix ������(�q�̫�@�Ӧr���}�l����)�A�����ܦ���e�r�ꪺ���X����C
			prefix = prefix.substr(0, prefix.size() - 1);

			if (prefix.empty()) return "";
		}
	}

	return prefix;
}

int main() {
	vector<string> strs = {"flower", "flow", "flight"};
	cout << LongestCommonPrefix(strs) << endl;
	return 0;
}