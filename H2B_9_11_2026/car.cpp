#include "car.h"
#include <iostream>


Car::Car(std::string b, std::string m, int y){
    brand = b;
    model = m;
    yearModel = y;
}

void Car::printData(){
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Production year: " << yearModel << std::endl;
    std::cout << std::endl;

}
