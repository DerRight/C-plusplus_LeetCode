#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
	// 初始設置一個空的堆疊 stk
	stack<char> stk;

	// 初始設置一個儲存左右括弧的匹配
	unordered_map<char, char> matching = {
		{')', '('}, {']', '['}, {'}', '{'}
	};

	// 遍歷整個字串 s
	for (char c : s) {
		// 如果是右括弧
		if (matching.count(c)) {

			// 如果堆疊為空或者棧頂元素不匹配
			if (stk.empty() || stk.top() != matching[c]) {
				return false;
			}

			// 彈出匹配的左括弧
			stk.pop();
		}
		else {
			// 左括弧壓堆疊
			stk.push(c);
		}
	}
	// 最終檢查堆疊是否為空
	return stk.empty();
}

int main() {
	string s;
	cin >> s;

	bool result = isValid(s);
	cout << result << endl;

	return 0;
}