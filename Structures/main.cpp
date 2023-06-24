#include <iostream>
using std::cout, std::endl, std::string;

// defining a struct called Student
struct Student{
    string firstName,lastName;
    char grade;
    [[nodiscard]] string toString() const{
        return this->firstName+"|"+this->lastName+"|"+this->grade;
    }
};

// main function
int main() {
    auto studentOne = Student{"Salomon","Metre",'A'};
    cout<<"First name of "<<studentOne.toString()<<" is : "<<studentOne.firstName<<"\n";
    return 0;
}
