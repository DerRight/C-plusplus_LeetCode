#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	if (list1 == NULL) return list2;
	if (list2 == NULL) return list1;

	if (list1->val < list2->val) {
		list1->next = mergeTwoLists(list1->next, list2);
		return list1;
	}
	else {
		list2->next = mergeTwoLists(list1, list2->next);
		return list2;
	}
}

void printList(ListNode* head) {
	while (head) {
		cout << head->val << "->";
		head = head->next;
	}
	cout << "null" << endl;
}

int main() {
	ListNode* list1 = new ListNode(1);
	list1->next = new ListNode(3);
	list1->next->next = new ListNode(5);

	ListNode* list2 = new ListNode(2);
	list2->next = new ListNode(4);
	list2->next->next = new ListNode(6);

	ListNode* mergedList = mergeTwoLists(list1, list2);

	printList(mergedList);

	return 0;
}