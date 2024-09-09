#include <iostream>
#include <unordered_map>
using namespace std;

int RomanToInteger(string s) {
	unordered_map<char, int> roman = {
		{'I', 1}, {'V', 5}, {'X', 10},
		{'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
	};

	int total_sum = 0; // 相加之後的總數
	int prev_value = 0; // 紀錄上一個羅馬字母的值

	for (int i = s.length() - 1; i >= 0; --i) {
		int current_value = roman[s[i]];

		if (current_value < prev_value) {
			total_sum -= current_value;
		}
		else {
			total_sum += current_value;
		}

		prev_value = current_value;
	}

	return total_sum;
}

int main() {
	string romanNum;
	cin >> romanNum;

	int result = RomanToInteger(romanNum);
	cout << result << endl;

	return 0;
}