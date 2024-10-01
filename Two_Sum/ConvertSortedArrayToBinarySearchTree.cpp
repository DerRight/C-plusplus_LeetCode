#include <iostream>
#include <vector>
using namespace std;

// �𪺰򥻬[�c
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
	// �Y�٨S����N�إ߾�
	if (root == nullptr) {
		root = new TreeNode;
		root->value = k;
		root->left = nullptr;
		root->right = nullptr;
	}
	else {
		// �p�G����F�i�H�P�_�𪺳W�h�A�Y�Ȥ�ڤp�N�����A�Ϥ���M
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