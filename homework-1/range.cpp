#include <iostream>

template <typename T>

class Range{
public:
    T start, end;
    Range(T start, T end) : start(start), end(end){}
    bool contains(const T& value){
        if(value >= start && value <= end){
            return true;
        }
        return false;
    }
    T length(){
        return (end - start);
    }
    void print(){
        std::cout<<start<<" "<<end<<"\n";
    }
};

int main()
{
    Range<int> ints(3, 10);
    ints.print();
    std::cout<<ints.length()<<"\n";
    Range<double> doubles(5.2, 6.3);
    doubles.print();
    std::cout<<doubles.length()<<"\n";
    Range<char> chars('a', 'h');
    chars.print();
    std::cout<<chars.length()<<"\n";
  
  return 0;
}

// cllas-shablon - 4