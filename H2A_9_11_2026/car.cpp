#include <iostream>
#include <string>
#include "car.h"

void Car::setBrand(std::string b){
    brand = b;
}

void Car::setModel(std::string m){
    model = m;
}

void Car::setYearModel(int y){
    yearModel = y;
}

void Car::printData(){
    std::cout << "Brand: " << brand << "\n";
    std::cout << "Model: "<<model << "\n";
    std::cout << "Production year: " << yearModel << "\n\n";
}






