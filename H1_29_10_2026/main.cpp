#include <iostream>
#include <stdexcept>

// calcsum ja calcdiv funktiot tulostaa suoraan eivätkä palauta
void calcsum(double a, double b){
    std::cout<<"The total is: "<<(a + b)<<std::endl;
}

void calcdiv(double a, double b){
    if (b==0){
        std::cout<<"The divider can't be zero!"<<std::endl;
    }else{
        std::cout<<"The divided total is: "<<(static_cast<float>(a)/b)<<std::endl;
    }
}

//retsum ja retdiv palauttaa arvon eivätkä tulosta
int retsum(double a, double b){
    return a + b;
}

float retdiv(double a, double b){
    if(b==0){
        throw std::runtime_error("The divider can't be zero!");
    }
    return static_cast<float>(a)/b;
}

int main(){
    double a=0;
    double b=0;

    //Kysytään luvut
    std::cout<<"Give a number: ";
    std::cin>>a;

    std::cout<<"Give another number: ";
    std::cin>>b;

    //retsum palauttaa arvon ja tulostaa sen
    std::cout<<"\n";
        int sum = retsum(a, b);
    std::cout<<"The total is: "<<sum<<std::endl;

    try{
        float divided = retdiv(a, b);
        std::cout<<"The divided total is: "<<divided<<std::endl;
    }

    catch(const std::runtime_error&e){
        std::cout<<"\n"<<e.what()<<std::endl;
    }

    return 0;
}
