#include <iostream>
#include <vector>
using namespace std;

string IntToRoman(int num) {
	// �w�qù���r���M��������ƭ�
	// �S���� unordered_map ����]�O�]�� unordered_map �O�L�Ǫ�
	// �p�G�n�� unordered_map �Ӯɰ����ܡA�N�n�ϥ� Array �ӻ��U
	vector<pair<int, string>> values = {
		make_pair(1000, "M"), make_pair(900, "CM"), make_pair(500, "D"),
		make_pair(400, "CD"), make_pair(100, "C"), make_pair(90, "XC"),
		make_pair(50, "L"), make_pair(40, "XL"), make_pair(10, "X"),
		make_pair(9, "IX"), make_pair(5, "V"), make_pair(4, "IV"),
		make_pair(1, "I")
	};

	string result = "";

	// �M��values�}�C�A������ഫ��ù���r��
	// auto �۰ʱ��_�X val ������
	for (const auto& val: values) {
		while (num >= val.first) {
			result += val.second; // ����ù���r���Aval.second�N�������ù���r��
			num -= val.first;     // ��h��������ƭȡAval.first�N���ƭ�
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