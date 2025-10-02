#include <iostream>

struct ListNode {
	int data;
	ListNode* next;
public:
	explicit ListNode(int val) : data(val), next(nullptr){}
};

int listLength(ListNode* head) {
	int count = 0;
	while (head != nullptr) {
		count++;
		head = head->next;
	}
	return count;
}

int findMiddle(ListNode* head) {
	ListNode* current1 = head;
	ListNode* current2 = nullptr;
	if (listLength(head) % 2 == 0) {
		current2 = head;
	}
	else {
		current2 = head->next;
	}
	while (current2 != nullptr) {
		current1 = current1->next;
		current2 = current2->next->next;
	}
	return current1->data;
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
	head->next->next = new ListNode(1);
	head->next->next->next = new ListNode(1);
	std::cout << findMiddle(head);

}