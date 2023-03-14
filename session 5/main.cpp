#include "vehicle.h"
#include "car.h"
#include "bike.h"
#include <iostream>

void information(vehicle *v){v->afficher();}

int main(){
    bike b1(20,150);
    car c1(20,5);
    information(&b1);
    information(&c1);
}
