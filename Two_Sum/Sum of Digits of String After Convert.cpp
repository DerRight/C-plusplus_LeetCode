#include <iostream>
#include <string>
using namespace std;

int getLucky(string s, int k) {
	int sum = 0;
	string result = ""; // 纗计﹃

	// 璸衡璣ゅダ计 a=1b=2c=3,....,z=26
	for (char c : s) {
		// 璣ゅダ ASCII a=97b=98摸崩
		// ┮盢–じ ASCII 搭 96  +1 眔 a=1b=2 单单
		int num = c - 'a' + 1;
		result += to_string(num); // 盢渤计跑Θ﹃
	}
	
	// 安砞 k=1
	//for (char j : result) {
	//	// 计 ASCII ノ c - '0' 锣传じ
	//	sum += j - '0';
	//}
	//result = to_string(sum);
	for (int i = 1; i <= k; i++) {
		sum = 0;
		for (char p : result) {
			sum += p - '0';
		}
		result = to_string(sum);
	}
	return sum;
}

int main() {
	string s;
	int k = 0;
	cin >> s >> k;

	int result = getLucky(s, k);
	cout << result << endl;
	return 0;
}