#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> triangle;

	// 若numRows = 0就回傳空三角形
	if (numRows == 0) return triangle;

	// 初始化三角形的第一行為1
	triangle.push_back({1});

	// 接著產生第二行以後的第一個和最後一個位元為1
	for (int i = 1; i < numRows; i++) {
		vector<int> row(i + 1); // 第i行有i+1個元素
		row[0] = 1; // 每行的第一個位元為1
		row[i] = 1; // 每行的最後一個位元為1

		// 計算中間的位元數
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