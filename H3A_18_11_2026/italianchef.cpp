#include "italianchef.h"

italianchef::italianchef(string name) : Chef(name) {
    cout << "italianchef " << this->name << " konstruktori" << endl;
}

italianchef::~italianchef(){
    cout << "italianchef " << this->name << " destruktori" << endl;
}

string italianchef::getName(){
    return this->name;
}

void italianchef::makePasta(){
    cout << "italianchef " << this->name << " makes pasta" << endl;
}

