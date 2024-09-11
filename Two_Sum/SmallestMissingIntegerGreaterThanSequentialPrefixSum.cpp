#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int missingInteger(vector<int>& nums) {
	// 初始設定首碼和為陣列的第一個元素
	int s = nums[0];

	// 遍歷整個組數，計算從第二個元素開始的首碼和
	// 條件是當前元素等於前一個元素 +1 (即陣列連續)
	for (int j = 1; j < nums.size() && nums[j] == nums[j - 1] + 1; ++j) {
		s += nums[j];
	}

	// 建立一個 bitset (長度為51) 來標記陣列中已經出現的整數
	bitset<51> vis;

	// 遍歷數組，將每個元素在 bitset 中標記一個 1 ，表示已經出現
	for (int x : nums) {
		vis[x] = 1;
	}

	// 從首碼和 s 開始遍歷，尋找第一個未出現在陣列中的整數
	for (int x = s;; ++x) {

		// 如果 x 超過 bitset 的範圍 (即51)，或者 x 沒有在陣列中出現 (vis[x]為0)，則返回 x
		if (x >= 51 || !vis[x]) {
			return x; // 返回最小的缺失整數值
		}
	}
}

int main() {
	vector<int> nums = { 1, 2, 3, 2, 5 };

	int result = missingInteger(nums);
	cout << result << endl;
	return 0;
}