#include <iostream>
using namespace std;

bool Solution_PalindromeNumber(int x) {
	// 琌璽计
	if (x < 0) return false;

	// 耞程计琌0ノx % 10计ㄓ
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