#include <iostream>
#include <array>

template<std::size_t N>

std::array<int, 256> countFrequency(std::array<char, N> arr1){
    std::array<int, 256> arr2 {};
    for(std::size_t i = 0; i < N; i++){
        unsigned char c = static_cast<unsigned char>(arr1[i]);
        arr2[c]++;
    }
    return arr2;
}

int main()
{
    std::array<char, 5> arr1 = {'h', 'e', 'l', 'l', 'o'};
    std::array<int, 256> arr2 = countFrequency<5>(arr1);

    std::cout << arr2['h'] << '\n';
    std::cout << arr2['e'] << '\n';
    std::cout << arr2['l'] << '\n';
    std::cout << arr2['o'] << '\n';
    

    return 0;
}