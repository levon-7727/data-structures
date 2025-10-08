#include <iostream>
#include <forward_list>

std::forward_list<int> mergeSort(std::forward_list<int>& flst1, std::forward_list<int>& flst2) {
	auto curr1 = flst1.begin();
	auto prev1 = flst1.before_begin();
	auto curr2 = flst2.begin();
	auto prev2 = flst2.before_begin();
	while (curr1 != flst1.end() && curr2 != flst2.end()) {
		if (*curr2 < *curr1) {
			curr1 = flst1.insert_after(prev1, *curr2);
			curr2++;
			prev1 = curr1;
			curr1++;
		}
		else {
			curr1++;
			prev1++;
		}
	}

	while (curr2 != flst2.end()) {
		flst1.insert_after(prev1, *curr2);
		prev1++;
		curr2++;
	}
	return flst1;
}

void print(std::forward_list<int>& flst) {
	auto it = flst.begin();
	for (; it != flst.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::forward_list<int> flst1 = { 1, 3, 5 };
	std::forward_list<int> flst2 = { 2, 4, 6 };
	flst1 = mergeSort(flst1, flst2);
	print(flst1);
}