#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
	// 初始化長度為 rowIndex + 1 的陣列，初始值為1
	vector<int> row(rowIndex + 1, 1);

	for (int i = 1; i < rowIndex; ++i) {
		for (int j = i; j > 0; --j) {
			// 每個元素等於上一行的兩個相鄰元素之和
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