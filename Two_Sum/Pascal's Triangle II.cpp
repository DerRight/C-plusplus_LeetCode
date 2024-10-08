#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
	// ��l�ƪ��׬� rowIndex + 1 ���}�C�A��l�Ȭ�1
	vector<int> row(rowIndex + 1, 1);

	for (int i = 1; i < rowIndex; ++i) {
		for (int j = i; j > 0; --j) {
			// �C�Ӥ�������W�@�檺��Ӭ۾F�������M
			row[j] += row[j - 1];
		}
	}
	return row;
}

int main() {
	int rowIndex;
	cin >> rowIndex;

	vector<int> result = getRow(rowIndex);

	for (int num : result) {
		cout << num << " ";
	}
	cout << endl;

	return 0;
}