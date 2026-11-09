#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{

    vector<Car> carList;

    carList.push_back(Car("Toyota", "Corolla", 2026));
    carList.push_back(Car("Volvo", "V60", 2020));
    carList.push_back(Car("Peugeot", "205", 1995));

    cout << "   Details of the second element in the list   " << endl;
    std::cout << std::endl;
    carList[1].printData();
    cout << endl;

    cout << "   Every car's details   " << endl;
    std::cout << std::endl;
    for (size_t i = 0; i < carList.size(); ++i){
        carList[i].printData();
    }
    return 0;
}
