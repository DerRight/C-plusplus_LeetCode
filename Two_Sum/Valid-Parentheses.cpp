#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
	// ��l�]�m�@�ӪŪ����| stk
	stack<char> stk;

	// ��l�]�m�@���x�s���k�A�����ǰt
	unordered_map<char, char> matching = {
		{')', '('}, {']', '['}, {'}', '{'}
	};

	// �M����Ӧr�� s
	for (char c : s) {
		// �p�G�O�k�A��
		if (matching.count(c)) {

			// �p�G���|���ũΪ̴̳��������ǰt
			if (stk.empty() || stk.top() != matching[c]) {
				return false;
			}

			// �u�X�ǰt�����A��
			stk.pop();
		}
		else {
			// ���A�������|
			stk.push(c);
		}
	}
	// �̲��ˬd���|�O�_����
	return stk.empty();
}

int main() {
	string s;
	cin >> s;

	bool result = isValid(s);
	cout << result << endl;

	return 0;
}