#include <iostream>

struct ListNode {
    int data;
    ListNode* next;

    explicit ListNode(int val) : data(val), next(nullptr) {}

};

ListNode* deleteValue(ListNode* head, int val) {
    if (head == nullptr) return nullptr;
    head->next = deleteValue(head->next, val);
    if (head->data == val) {
        ListNode* temp = head->next;
        delete head;
        return temp;
    }
    return head;
}


void print(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head = deleteValue(head, 3);
    print(head);

    return 0;
}