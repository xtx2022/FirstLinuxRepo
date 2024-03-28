#include <iostream> 

class person{
    private:
    int age_;
    std::string name_;
    public:
    person() = default;
    person(int age, std::string name): age_(age), name_(name) {}
    int getAge(){
        return age_;
    }
};