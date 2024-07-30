#include <iostream>
using namespace std;

bool Solution_PalindromeNumber(int x) {
	// 判別是否為負數
	if (x < 0) return false;

	// 判斷最後一個數是否為0，用x % 10後的小數位來判別
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