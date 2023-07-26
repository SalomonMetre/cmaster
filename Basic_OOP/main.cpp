#include <iostream>
#include <utility>
using std::cin, std::cout, std::string, std::endl, std::to_string;

class Student{

private:
    string name;
    int age {};

public:
    Student(string name, int age) {
        this->name = std::move(name);
        this->age = age;
    }
    string getDetails(){
        return this->name + " " + to_string(this->age);
    }
};

struct Shape{
    string name;
};

int main() {
//  normal
    Student studentOne = Student("Salomon", 21);
    cout<<studentOne.getDetails()<<endl;

//  using a pointer
    auto* studentTwo = new Student("Joseph", 20);
    cout<<studentTwo->getDetails()<<endl;

    return 0;
}
