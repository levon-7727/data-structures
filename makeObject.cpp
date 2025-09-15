#include <iostream>
#include <utility>

class Person{
public:
    std::string name;
    int age;
    Person(std::string name, int age) : name(name), age(age){}
    void print(){
        std::cout<<name<<" "<<age<<"\n";
    }
    ~Person(){}
};

template<typename T, typename... Args>

T makeObject(Args&&... args){
    return T(std::forward<Args>(args)...);
}

int main() {
    auto person = makeObject<Person>("jhon", 58);
    person.print();
    
    return 0;
}

