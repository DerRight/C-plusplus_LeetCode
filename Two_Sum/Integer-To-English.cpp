#include <iostream>
#include <vector>
using namespace std;

string IntToEnglish(int num) {
	vector<string> belowTwenty = {
		"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
		"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
	};
	vector<string> tens = { "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
	vector<string> thousands = { "", "Thousand", "Million", "Billion" };

	
}

int main() {
	int num = 0;
	cin >> num;

	string result = IntToEnglish(num);
	cout << result << endl;
	return 0;
}