#include <iostream>

struct ListNode {
    int data;
    ListNode* next;
public:
    explicit ListNode(int val) : data(val), next(nullptr) {}
};

ListNode* createList() { return nullptr; }

template<typename T, typename... Args>
ListNode* createList(T first, Args... args) {
    ListNode* node = new ListNode(first);
    node->next = createList(args...);
    return node;
}

void print(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* head = createList(1, 2, 3, 4, 5);
    print(head);

}