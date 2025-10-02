#include <iostream>

struct ListNode {
	int data;
	ListNode* next;
public:
	explicit ListNode(int val) : data(val), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
	if (!head) { return false;}
	ListNode* firstPointer = head;
	ListNode* secondPointer = head->next;
	while (secondPointer != nullptr && secondPointer->next != nullptr) {
		if (secondPointer == firstPointer) {return true;}
		firstPointer = firstPointer->next;
		secondPointer = secondPointer->next->next;
	}
	return false;
}

int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next = head;
	std::cout << hasCycle(head);
}