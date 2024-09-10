#include <iostream>
#include <string>
#include <vector>
using namespace std;

// & 表示引用
string LongestCommonPrefix(vector<string>& strs) {
	if (strs.empty()) return "";

	// 先將第一個字串當作初始首碼
	string prefix = strs[0];

	// 遍歷剩餘的字串
	for (int i = 1; i < strs.size(); ++i) {

		// 在當前字串 strs[i]] 中尋找 prefix。
		// find(prefix) 返回 prefix 在 strs[i] 中出現的起始位置。(0 的話是首碼)
		// find(prefix) != 0 表示當前首碼不再是這個字串的首碼，需要縮短字串。
		while (strs[i].find(prefix) != 0) {

			// prefix.substr(0, prefix.size() - 1) 使用 substr 函式取出首碼的前 n-1 個字元，縮短首碼。
			// 下行程式碼是每次縮短 prefix 的長度(從最後一個字元開始移除)，直到變成當前字串的首碼為止。
			prefix = prefix.substr(0, prefix.size() - 1);

			if (prefix.empty()) return "";
		}
	}

	return prefix;
}

int main() {
	vector<string> strs = {"flower", "flow", "flight"};
	cout << LongestCommonPrefix(strs) << endl;
	return 0;
}