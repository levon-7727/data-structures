#include <iostream>

struct ListNode {
	int data;
	ListNode* next;
public:
	explicit ListNode(int val) : data(val), next(nullptr){}
};

int binaryToDecimal(int binary) {
	int decimal = 0;
	int product = 1;
	while (binary > 0) {
		int lastDigit = binary % 10;
		decimal += lastDigit * product;
		product *= 2;
		binary /= 10;
	}
	return decimal;
}

ListNode* toDecimal(ListNode* head){
	ListNode* current = head;
	while (current != nullptr) {
		current->data = binaryToDecimal(current->data);
		current = current->next;
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

int main(){
	ListNode* head = new ListNode(1011);
	head->next = new ListNode(101);
	head->next->next = new ListNode(111);
	head = toDecimal(head);
	print(head);
}