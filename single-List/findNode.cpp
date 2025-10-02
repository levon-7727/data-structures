#include <iostream>

struct ListNode {
    int data;
    ListNode* next;
public:
    explicit ListNode(int val) : data(val), next(nullptr) {}
};

bool findNode(ListNode* head, int value) {
    while (head != nullptr) {
        if (head->data == value) {
            return true;
        }
        head = head->next;
    }
    return false;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    std::cout << findNode(head, 1);

}