#include <iostream>
#include <map>
#include <vector>

template <typename Key, typename Value>
class BidirectionalMap{
private:
    std::map<Key, Value> byKey;
    std::map<Value, Key> byValue;
public:
    void insert(Key k, Value v){
        byKey[k] = v;
        byValue[v] = k;
    }
    std::string getByKey(Key k){
        return byKey[k];
    }
    
    int getByValue(Value v){
        return byValue[v];
    }
    
    void removeByKey(Key k){
        auto it = byKey.find(k);
        Value v = it->second;
        byKey.erase(k);
        byValue.erase(v);
    }
};

int main()
{
    BidirectionalMap<int, std::string> bm;
    bm.insert(1, "one");
    bm.insert(2, "two");
    std::cout << bm.getByKey(1) << '\n';      
    std::cout << bm.getByValue("two") << '\n'; 
    
    return 0;
}