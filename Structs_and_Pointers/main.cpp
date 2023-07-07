#include <iostream>
using std::cout, std::endl, std::string;

struct Student{
    string firstName;
    int age{};
};

int main() {
//    The C- style

    struct Student* newStudent;
    newStudent = (Student *) malloc(sizeof(Student));
    newStudent->firstName = "Salomon";
    newStudent->age =21;
    cout<<newStudent->firstName<<endl;
    cout<<newStudent->age<<endl;

//    The C++ style
    auto anotherPointer = new Student;
    anotherPointer->firstName = "Salomon";
    anotherPointer->age =23;
    cout<<anotherPointer->firstName<<endl;
    cout<<anotherPointer->age<<endl;
    return 0;
}
