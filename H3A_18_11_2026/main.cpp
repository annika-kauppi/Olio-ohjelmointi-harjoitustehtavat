#include <iostream>
#include "chef.h"
#include "italianchef.h"


using namespace std;

int main(){
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();


    italianchef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
    cout << "name of the italian chef is: " << chef2.getName() << endl;

    return 0;
}
