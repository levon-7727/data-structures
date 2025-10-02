#include <iostream>

struct ListNode {
	int data;
	ListNode* next;
public:
	explicit ListNode(int val) : data(val), next(nullptr) {}
};

ListNode* deleteDup(ListNode* head) {
	if (!head) { return nullptr; }
	ListNode* current = head;
	while (current != nullptr && current->next != nullptr) {
		if (current->data == current->next->data) {
			ListNode* temp = current->next;
			current->next = current->next->next;
			delete temp;
		}
		else {
			current = current->next;
		}
	}
	return head;
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
	head->next = new ListNode(1);
	head->next->next = new ListNode(2);
	head->next->next->next = new ListNode(3);
	head->next->next->next->next = new ListNode(3);
	head = deleteDup(head);
	print(head);
}