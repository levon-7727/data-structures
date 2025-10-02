#include <iostream>

struct ListNode {
	int data;
	ListNode* next;
public:
	explicit ListNode(int val) : data(val), next(nullptr) {}
};

ListNode* reversed(ListNode* head) {
	ListNode* current = head;
	ListNode* prev = nullptr;
	while (current != nullptr) {
		ListNode* next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

void print(ListNode* head) {
	while (head != nullptr) {
		std::cout << head->data << " ";
		head = head->next;
	}
	std::cout << std::endl;
}

int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head = reversed(head);
	print(head);
}