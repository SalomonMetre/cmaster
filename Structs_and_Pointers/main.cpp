#include <iostream>
using std::cout, std::endl, std::string;

struct Student{
    string firstName;
    int age{};
};

struct Rectangle{
    int breath;
    int length;
};

void changeLengthAndShowPerimeter_Pointer(Rectangle *rectangle){
    rectangle->length += 1;
    cout<<"Perimeter is : "<<2*(rectangle->length+rectangle->breath)<<endl;
}

void changeLengthAndShowPerimeter_Reference(Rectangle &rectangle){
    rectangle.length += 1;
    cout<<"Perimeter is : "<<2*(rectangle.length+rectangle.breath)<<endl;
}

void changeLengthAndShowPerimeter_Value(Rectangle rectangle){
    rectangle.length += 1;
    cout<<"Perimeter is : "<<2*(rectangle.length+rectangle.breath)<<endl;
}


int main() {

//    The C style
    struct Student* newStudent;
    newStudent = (Student*) malloc(sizeof(Student));
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

//    change the width of a rectangle
    auto rectangle = Rectangle{12, 13};
//    case 1
    changeLengthAndShowPerimeter_Pointer(&rectangle);

//    case 2
    changeLengthAndShowPerimeter_Reference(rectangle);

////    case 3
    changeLengthAndShowPerimeter_Value(rectangle);

    cout<<"Current length : "<<rectangle.length<<endl;
    return 0;
}
