#include <iostream>
#include "car.h"
#include "rectangle.h"
#include <memory>
#include "student.h"

int main(){
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2026);

    myCar.printData();


    Rectangle* myRectangle = new Rectangle();

    myRectangle->setWidth(5.5);
    myRectangle->setHeight(4.0);

    std::cout << "The area of the rectangle: " << myRectangle->getArea() << "\n";
    std::cout << "The perimeter of the rectangle: " << myRectangle->getCircum() << "\n\n";

    delete myRectangle;
    myRectangle = nullptr;



    std::unique_ptr<Student>myStudent = std::make_unique<Student>();

    myStudent->setName("Kyllikki");
    myStudent->setStudentNumber(1654);
    myStudent->setAverage(9.2);

    std::cout << "student info:\n";
    std::cout << "Name: " << myStudent->getName() << "\n";
    std::cout << "Student number: " << myStudent->getStudentNumber() << "\n";
    std::cout << "Average: " << myStudent->getAverage() << "\n";


    return 0;
}
