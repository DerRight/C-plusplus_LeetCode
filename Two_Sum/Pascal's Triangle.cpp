#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> triangle;

	// �YnumRows = 0�N�^�ǪŤT����
	if (numRows == 0) return triangle;

	// ��l�ƤT���Ϊ��Ĥ@�欰1
	triangle.push_back({1});

	// ���۲��ͲĤG��H�᪺�Ĥ@�өM�̫�@�Ӧ줸��1
	for (int i = 1; i < numRows; i++) {
		vector<int> row(i + 1); // ��i�榳i+1�Ӥ���
		row[0] = 1; // �C�檺�Ĥ@�Ӧ줸��1
		row[i] = 1; // �C�檺�̫�@�Ӧ줸��1

		// �p�⤤�����줸��
		for (int j = 1; j < i; j++) {
			row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
		}

		triangle.push_back(row);
	}

	return triangle;
}

int main() {
	int numRows = 0;
	cin >> numRows;

	vector<vector<int>> result = generate(numRows);

	for (const auto& row: result) {
		for (int num : row) {
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}