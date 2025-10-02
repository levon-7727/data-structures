#include <iostream>

struct ListNode {
	int data;
	ListNode* next;
public:
	explicit ListNode(int val) : data(val), next(nullptr) {}
};

int listLength(ListNode* head) {
	int count = 0;
	while (head != nullptr) {
		count++;
		head = head->next;
	}
	return count;
}

ListNode* findMiddle(ListNode* head) {
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
	return current1;
}

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

bool isPolindrome(ListNode* head) {
	ListNode* curr = head;
	ListNode* temp = findMiddle(curr);
	temp = reversed(temp);
	while (temp != nullptr) {
		if (head->data != temp->data) {
			return false;
		}
		temp = temp->next;
		head = head->next;
	}
	return true;
}

int main() {
	ListNode* head = new ListNode(2);
	head->next = new ListNode(2);
	head->next->next = new ListNode(2);
	head->next->next->next = new ListNode(2);
	std::cout << isPolindrome(head);
}