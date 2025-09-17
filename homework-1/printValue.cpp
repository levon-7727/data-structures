#include <iostream>

template <typename T>

void printValue(const T& value){
    std::cout<<value<<"\n";
}

template<>
void printValue<bool>(const bool& value){
    std::cout<<(value ? "true" : "false") << "\n";
}

template<>

void printValue<char*>(char* const& value){
    std::cout<<"'["<<value<<"]'"<<"\n";
}

int main()
{
    std::string name = "car";
    printValue(name);
  
  return 0;
}

// Специализация шаблонов - 1