#include <forward_list>
#include <iostream>

int removeAllOccurrences(std::forward_list<int>& fl, int value) {
    int removedCount = 0;

    auto prev = fl.before_begin();
    auto curr = fl.begin();

    while (curr != fl.end()) {
        if (*curr == value) {
            curr = fl.erase_after(prev);
            ++removedCount;
        } else {
            ++prev;
            ++curr;
        }
    }

    return removedCount;
}

int main() {
    std::forward_list<int> fl = {1, 2, 3, 2, 4, 2};
    int removed = removeAllOccurrences(fl, 2);

    std::cout << removed << std::endl;

    return 0;
}
