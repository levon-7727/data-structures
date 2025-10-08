#include <iostream>
#include <forward_list>

std::forward_list<int> moveToFront(std::forward_list<int>& flst, int value) {
	auto curr = flst.begin();
	auto prev = flst.before_begin();
	while(curr != flst.end()) {
		if (*curr == value) {
			curr = flst.erase_after(prev);
			flst.push_front(value);
		}
		else{
			curr++ ;
		}
	}
	return flst;
}

void print(std::forward_list<int>& flst) {
	auto it = flst.begin();
	for (; it != flst.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::forward_list<int> flst = { 1, 2, 2, 2, 3 };
	flst = moveToFront(flst, 2);
	print(flst);
}