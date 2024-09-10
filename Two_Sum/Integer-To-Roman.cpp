#include <iostream>
#include <vector>
using namespace std;

string IntToRoman(int num) {
	// 定義羅馬字母和對應的整數值
	// 沒有用 unordered_map 的原因是因為 unordered_map 是無序的
	// 如果要用 unordered_map 來時做的話，就要使用 Array 來輔助
	vector<pair<int, string>> values = {
		make_pair(1000, "M"), make_pair(900, "CM"), make_pair(500, "D"),
		make_pair(400, "CD"), make_pair(100, "C"), make_pair(90, "XC"),
		make_pair(50, "L"), make_pair(40, "XL"), make_pair(10, "X"),
		make_pair(9, "IX"), make_pair(5, "V"), make_pair(4, "IV"),
		make_pair(1, "I")
	};

	string result = "";

	// 遍歷values陣列，接整數轉換為羅馬字母
	// auto 自動推斷出 val 的類型
	for (const auto& val: values) {
		while (num >= val.first) {
			result += val.second; // 拼接羅馬字母，val.second代表對應的羅馬字母
			num -= val.first;     // 減去對應的整數值，val.first代表整數值
		}
	}

	return result;
}

int main() {
	int num;
	cin >> num;

	string result = IntToRoman(num);
	cout << result << endl;

	return 0;
}