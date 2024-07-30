#include <iostream>
using namespace std;

bool Solution_PalindromeNumber(int x) {
	// �P�O�O�_���t��
	if (x < 0) return false;

	// �P�_�̫�@�ӼƬO�_��0�A��x % 10�᪺�p�Ʀ�ӧP�O
	if (x != 0 && x % 10 == 0) return false;

	int reversedNumber = 0;
	while (x > reversedNumber) {
		reversedNumber = reversedNumber * 10 + x % 10;
		x /= 10;
	}

	return x == reversedNumber || x == reversedNumber / 10;
}

int main() {
	int x = 121;

	Solution_PalindromeNumber(x);
	cout << Solution_PalindromeNumber << endl;

	return 0;
}