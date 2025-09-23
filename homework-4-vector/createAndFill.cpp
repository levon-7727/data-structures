#include <iostream>
#include <vector>

void createAndFillVector(int N) {
    std::vector<int> vec(N);

    for (int i = 0; i < N; ++i) {
        vec[i] = i + 1;
    }

    for (int i = 0; i < N; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << vec.size() << std::endl;
    std::cout << vec.capacity() << std::endl;
}

int main() {
    int N = 10;
    createAndFillVector(N);
    return 0;
}