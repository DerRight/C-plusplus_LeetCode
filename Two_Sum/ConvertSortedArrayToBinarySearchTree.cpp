#include <iostream>
#include <vector>
using namespace std;

// 樹的基本架構
struct TreeNode {
	int value;
	struct TreeNode* left{};
	struct TreeNode* right{};
};

class Solution {
public:
	TreeNode* sortedArrayToBST(vector<int>& nums) {

	}
};

void insertNode(TreeNode*& root, const int k) {
	// 若還沒有樹就建立樹
	if (root == nullptr) {
		root = new TreeNode;
		root->value = k;
		root->left = nullptr;
		root->right = nullptr;
	}
	else {
		// 如果有樹了可以判斷樹的規則，若值比根小就往左，反之亦然
		if (k < root->value) insertNode(root->left, k);
		else insertNode(root->right, k);
	}
}

void printTree(TreeNode* node) {
	if (node != nullptr) {
		printTree(node->left);
		cout << node->value << "; ";
		printTree(node->right);
	}
}

int main() {
	vector<int> nums = { -10, -3, 0, 5, 9 };

	TreeNode* root = nullptr;

	for (const auto& item : nums) {
		insertNode(root, item);
	}

	printTree(root);
	cout << endl;

	return 0;
}